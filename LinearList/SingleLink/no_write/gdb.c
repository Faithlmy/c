#include <stdio.h>

int fun(int low, int high)
{
	int i, sum;
	for (i = low; i <= high; i++)
		sum = sum + i;
	printf("%d\n", i);
	return sum;
}

int main(void)
{
	int result[100];
	result[0] = fun(1, 3);
	result[1] = fun(1, 10);
	printf("result[0]=%d\nresult[1]=%d\n", result[0], result[1]);
	return 0;
}