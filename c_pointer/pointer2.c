#include<stdio.h>
int main()
{
	int *p,a[5], i;
	p = a;
	printf("please enter 5 number: ");
	for (i= 0; i < 5; i++)
		{
			scanf("%d", p++);
		}
		p = a;//没有此句话，将输出的是地址
	for (i = 0; i < 5; i++, p++)
		{
			printf("%d ", *p);
		}
		printf("\n");
		return 0;
}
