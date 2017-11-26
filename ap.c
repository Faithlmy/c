#include<stdio.h>
int main()
{
	int a[4];
	int i;
	printf("%d\n",sizeof(a));
	for (i = 0 ; i < 4; i++)
	{
		a[i] = malloc(sizeof(int)*i);
	}
	for (i = 0; i < 4; i++)
	{
		free(a[i]);
	}
	return 0;
}
