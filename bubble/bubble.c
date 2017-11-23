#include<stdio.h>

void swap(int a[], int i, int j)
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
int bubblesort(int a[], int n)
{
	int i, j;
	for(i = 0 ; i < n - 1; i++)
	{
		for(j = 0; j < n - 1 - i; j++)	
		{
			if(a[j] > a[j + 1])	
				swap(a, j, j+1);
		}
	}
}
int main()
{
	int a[] = {2, 4, 1, 3, 9, 5};
	int n = sizeof(a)/sizeof(int);
	printf("n = %d\n",n);
	int p = sizeof(a);
	printf("p = %d\n",p);
	int i;
	bubblesort(a, n);
	for(i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}
