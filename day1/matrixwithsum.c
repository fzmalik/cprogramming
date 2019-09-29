#include<stdio.h>

int main()
{      
        int i,j,sum=0;
        int arr[3][3];
        printf("\n enter the numbers in array :");
        for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				scanf("%d",&arr[i][j]);
			}	
		}	 
	printf("\n your entered matrix is : \n");
	     for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{   
			
				printf("%d",arr[i][j]);   
				sum+=arr[i][j];
			}
			
			printf("\n");  
			
		}
	  printf("\n sum : %d",sum); 
	return 0;
	
}