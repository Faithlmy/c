#include<stdio.h>
#include<stdlib.h>
#include"double_list.h"
int main(void)
{
	int flag = 0;
	int length = 0;
	int position = 0;
	int value = 0;
	DoubleList head = NULL;
	head = InitDoubleList();
	TraverseDoubleList(head);
	//return head;
}
