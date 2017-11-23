#include<stdio.h>
#include<time.h>
void com(int *a, int *b);
int main()
{
	clock_t st, et;
	st = clock();
	int a, b, i=3;
	double t = 0.;
	printf("please in put two int  numbers: ");
	scanf("%d %d",&a, &b);
	while(i--)
	{
	//	if(a != b)
	//	{
			com(&a, &b);	
	//	}
	}
	printf("%d,%d\n",a, b);
	printf("%d,%d\n",a, b);
	et = clock();
	t = (double)(et-st);
	printf("second = %f\n",t);
	return 0;
	//p1 = &a;
	//printf("*p1 %d\n",*p1);
	//printf("&(p1) %d\n",&(p1));
	//printf("a %d\n",a);
	//return 0;
}
void com(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
