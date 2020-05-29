#include<stdio.h>

int main()
{      
        int i,j;
        int arr[3][3],ac[3][3],rc[3][3];
        printf("\n enter the numbers in array :");
        for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		} 
		

	     printf("\n enter the numbers in array :");
        for(i=0;i<=2;i++)
   {
	    for(j=0;j<=2;j++)
      {
          scanf("%d",&ac[i][j]);
      }
    } 
	
	printf("\n your entered matrix is : \n");
	     for(i=0;i<=2;i++)
     {
	    for(j=0;j<=2;j++)
	    {   
			rc[i][j]=arr[i][j]*ac[j][i]+arr[i][j]*ac[j][i]+arr[i][j]*ac[j][i];		
	    }
              
  	}
	
	printf("\n multiplyed matrix is : \n");
	     for(i=0;i<=2;i++)
     {
	    for(j=0;j<=2;j++)
	    {   printf("%d \t",rc[i][j]);   
	    }
                printf("\n");  
  	}
	   
		 return 0;
	
}