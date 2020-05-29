#include<stdio.h>
int main()
{
	int A[2][2],i,j,temp;
	printf("\n Enter the element of matrix :-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	temp=A[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(A[i][j]>temp)
			{
				temp=A[i][j];
			}
		}
	}
	printf("\n greates=\t %d",temp);
	return 0;
}