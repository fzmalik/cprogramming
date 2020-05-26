#include<stdio.h>

int main()
{      
        int i,sum=0;
        int arr[10];
        printf("\n enter the numbers in array :");
        for(i=0;i<10;i++)
		{
			scanf("%d",&arr[i]);
		}
        for(i=0;i<10;i++)
		{
			sum+=arr[i];
      	}
	    printf("\n sum of aaray is :%d",sum);
		return 0;
	
}