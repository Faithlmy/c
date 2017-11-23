#include<stdio.h>
int main()
{
	int a, b, *p1, *p2, *p;
	printf("p1 = %p p2 = %p p = %p\n", p1, p2, p);
	a = 2;
	b = 3;
	p1 = &a;
	p2 = &b;
	printf("p1 = %p p2 = %p p = %p\n", p1, p2, p);
	p = p1;
	p1 = p2;
	p2 = p;
	printf("p1 = %p p2 = %p p = %p\n", p1, p2, p);
	printf("a = %d b = %d\n", a, b);
	printf("*p1 = %d *p2 =  %d\n", *p1, *p2);
	return 0;
}
