#include<stdio.h>
#include "vic_list.h"
void main()
{
	int i,j;
	j = 0;
	//int *n;
	pNode list, start, n;
	printf("please input number of node, and push Enter: ");
	scanf("%d",&i);
	list = T_LinkCreate(i);
	n = Find(list, 2);
	printf("two = %d\n", *n);
	start = list -> next;
	while(start)
	{
		 printf("%d\n", start -> data);
		 start = start -> next;
	}
	j = Link_Length(list);
	printf("length = %d\n", j);
}
