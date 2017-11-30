#include<stdio.h>
void parray(int a[], int size)
{
	int i = 0;
	printf("parray = %d\n", sizeof(a));
	for (i = 0; i < size; i++)
	{
		printf("%d\n",a[i]);
	}
}
int main()
{
	int a[3][3] = {{2,3,1},{4,2,9},{3,5,6}};
	int *p = &a[0][0];
	parray(p, 9);
	return 0;
}
