#include<stdio.h>
int main()
{
	int count, *array;
	if((array(int *)malloc(10*sizeof(int)))==NULL)
	{
		printf("error");
		exit(1);
	}
	for(count=0; count<10;count++)
	array[count] = count;
	for(count=0;count<10;count++)
	printf("%2d",array[count]);
	return 0;
}
