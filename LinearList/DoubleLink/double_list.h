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
//判断是否为空链表
int IsEmptyDoubleList(DoubleList DHead);
//计算链表的长度
int GetLengthDoubleList(DoubleList DHead);
//双链表的插入
int InsertDoubleList(DoubleList DHead, int pos, int data);
#endif
