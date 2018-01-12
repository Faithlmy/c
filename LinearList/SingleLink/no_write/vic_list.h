#ifndef  _VIC_LIST_H
#define  _VIC_LIST_H

typedef struct node
{
	int data;
	struct node *next;
}Node, *pNode;

pNode initNode();//初始化节点
pNode H_LinkCreate(int x);//头插法 建立节点，x代表节点个数
pNode T_LinkCreate(int x);//尾插法 建立节点，x代表节点个数
pNode F_LinkCreate();//尾插法 建立节点，设置标志位结束
pNode Find(pNode L, int i);//在链表L中查找第i个节点的值
pNode Link_Length(pNode L);//链表的长度
pNode Delete_list(pNode L, int i)
#endif
