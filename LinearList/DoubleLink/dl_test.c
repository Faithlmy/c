#include<stdio.h>
#include<stdlib.h>
#include"double_list.h"
int main(void)
{
	int flag = 0;
	int length = 0;
	int n = 0, m = 0;
	int position = 0;
	int value = 0;
	DoubleList head = NULL;
	head = InitDoubleList();
	TraverseDoubleList(head);
	m = InsertDoubleList(head, 2,  99);
	length = GetLengthDoubleList(head);
	n = IsEmptyDoubleList(head);
	printf("%d\n",length);
	printf("%d\n",n);
	//return head;
}
