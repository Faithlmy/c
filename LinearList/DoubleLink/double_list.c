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
//判断是否为空链表
int IsEmptyDoubleList(DoubleList DHead)
{
	DoubleList dh = DHead -> next;
	if(dh == NULL)
		return 1;
	else
		return 0;
}
//计算链表的长度
int GetLengthDoubleList(DoubleList DHead)
{
	int length = 0;
	DoubleList dh = DHead -> next;
	while(dh != NULL)
		{
			length++;
			dh = dh -> next;
		}
		return length;
}
//双链表的插入
int InsertDoubleList(DoubleList DHead, int pos, int data)
{
	DoubleList dh = NULL, d_new = NULL;
	if(pos > 0 && pos < GetLengthDoubleList(DHead) + 2)
	{
		d_new = (DoubleList)malloc(sizeof(DHead));
		if(d_new == NULL)
		{
			printf("内存分配失败！");
			exit(EXIT_FAILURE);
		}
		while(1)
		{
			pos--;
			if(pos == 0)
			{
				break;	
			}
			DHead = DHead -> next;
		}
		printf("1");
		d_new -> data = data;
		d_new -> prior = dh -> prior;
//		if(dh != NULL)
//		{
			dh -> prior -> next = d_new;
//		}
		d_new -> next = dh;
		return 1;
	}
	else
		return 0;
}
