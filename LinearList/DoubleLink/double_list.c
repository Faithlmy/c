#include<stdio.h>
#include<stdlib.h>
#include "double_list.h"
//初始化双向链表
DoubleList InitDoubleList(void)
{
	int i, length=0,data=0;
	DoubleList DTail = NULL, D_new = NULL;
	DoubleList DHead = (DoubleList)malloc(sizeof(DNode));

	if(DHead == NULL)
	{
		printf("内存分配失败！");
		exit(EXIT_FAILURE);
	}
	DHead -> data = 0;
	DHead -> prior = NULL;
	DHead -> next = NULL;
	DTail = DHead;

	printf("请输入链表的长度");
	scanf("%d",&length);
	for (i=1; i<length+1; i++)
	{
		D_new = (DoubleList)malloc(sizeof(DNode));
		if(D_new == NULL)
		{
			printf("内存分配失败！");
			exit(EXIT_FAILURE);
		}
		printf("请输入第%d个元素的值：", i);
		scanf("%d",&data);
		 D_new -> data = data;
		 D_new -> next = NULL;
		 D_new -> prior  = DTail; 
		 DTail -> next = D_new;
		 DTail = D_new;
	}
	return DHead;
}
//打印链表
void TraverseDoubleList(DoubleList DHead)
{
	DoubleList dl = DHead -> next;
	printf("结果如下：\n");
	while(dl != NULL)
	{
		printf("%d ", dl -> data);
		dl = dl -> next;
	}
	printf("\n");
}
