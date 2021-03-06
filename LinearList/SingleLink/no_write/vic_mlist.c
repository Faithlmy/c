#include<stdio.h>
#include<malloc.h>
#include "vic_list.h"
//开辟首节点并初始化
pNode initNode()
{
	Node *p;
	p = (Node *) malloc(sizeof(Node));//开辟节点
	if(p == NULL)
	{
		printf("memory error!");
	}
	p -> next =NULL;//若成功，next域置null
	return p;
}

//头插法建立单链表
pNode H_LinkCreate(x)
{
	Node *pc;
	pc = initNode();//开辟首节点
	while(x > 0)
	{
		Node *pn;
		pn = (Node *)malloc(sizeof(Node));//开辟新的节点
		if(pn == NULL)
		{
			printf("memory error!");
		}
		else
		{
			pn -> data = x;//给数据域放值
			pn -> next = pc -> next;//新开辟的节点指向首节点
			//pn -> next = NULL;
			pc -> next = pn;
		}
		x--;
	}
	return pc;
}

//尾插法建立链表
pNode T_LinkCreate(x)
{
	Node *r, *s, *h;//h用于返回尾插法的头指针，若直接返回s，切记s指向链表的尾部，s->next将会越界
	h = r = initNode();
	while(x > 0)
	{
			s = (Node *)malloc(sizeof(Node));
			s -> data = x; 
			r -> next = s;
			r = s;
			x--;
	}
	return h;
}
//以标志位结束
pNode F_LinkCreate()
{
	Node *r, *s, *h;
	h = r = initNode();
	int flag = 1;
	char c;
	while(flag)
	{
		c = getchar();
		if(c!='$')
		{
			s = (Node *)malloc(sizeof(Node));
			s -> data = c;
			r -> next = s;
			r = s;
		}
		else
		{
			flag = 0;
			r -> next = NULL;
		}
	}
	return h;
}

//统计链表的长度
pNode Link_Length(Node *L)
{
	int i;
	Node *p;
	i = 0;
	p = L -> next;
	while(p != NULL)
	{
		p = p -> next;
		i++;
	}
	return i;
}

//按序号查找
pNode Find(Node *L, int i)
{
	int j;
	Node *p;
	if(i<0)
	{
		return NULL;	
	}
	p = L;
	j = 0;
	while((p -> next != NULL) && (j < i))
	{
		p = p -> next;
		j++;
	}
	if(i == j)
		return p;
	else 
		return NULL;
}
//求单链表的长度：
pNode ListLength(Node *L)
{
	int j;
	Node *p;
	p = l -> next;
	j = 0;
	while(p!=NULL)
	{
		p = p -> next;
		j++;
	}
return j;
}

//删除单链表位置i上的元素：
pNode Delete_List(Node *L, int i)
{
	Node *pre, *r;
	int k;
	pre = L;
	k = 0;
	//找被删除的节点
	while(pre -> next != NULL && k < i-1)
	{
		pre = pre -> next;
		k = k+1;
	}
	if (!(pre -> next))
	{
		printf("The site is error!");
		return ERROR;
	}
	r = pre -> next;
	pre -> next = r -> next;
	free(r);
	return ok;

}
