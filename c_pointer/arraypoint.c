#include<stdio.h>
int main()
{
	int a[2][3] = {{3, 2, 5},{2, 6, 9}};
	int (*p)[3];
	p = a;
	printf("a[1][2] = %d", a[1][2]);
	printf("(*(p+1)+1) = %d", *(*(p+1)+2));
	printf("(*((p+1)+1)) = %d", (*((p+1)+1)));
}
