#ifndef _DOUBLE_LIST_H
#define _DOUBLE_LIST_H
typedef struct DNode
{
	int data;
	struct DNode *prior, *next;
} DNode, *DoubleList;

//初始化双向链表
DoubleList InitDoubleList(void);
//打印链表
void TraverseDoubleList(DoubleList DHead);
#endif
