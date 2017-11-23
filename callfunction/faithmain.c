#include"stdio.h"
#include"fun.h"
float myadd(float x, float y);
void main()
{
	//float add(float x, float y);
	float  a, b, c;
	printf("Please enter a and b : ");
	scanf("%f,%f", &a, &b);
	c = myadd(a, b);
	printf("sum is %f\n",c);
}
