#include<stdio.h>
int main()
{
      int ar[5],i,temp;
	  printf("\n Enter element in array :-");
	   for(i=0;i<=4;i++)
	   {
		   scanf("%d",&ar[i]);
	   }
	   temp=ar[0];
		for(i=0;i<=4;i++)
		{
			
		  if(ar[i]>temp)
			{
				temp=ar[i];
				}
		}
		printf("\n largest element :%d",temp);
		return 0;
}
