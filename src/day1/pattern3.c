#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}