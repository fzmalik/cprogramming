#include<stdio.h>
int main()
{
	 int Ar[5],i,j,temp;
	 for(i=0;i<=4;i++)
	 {
		 printf("\n Enter the %d Number : ",i+1);
		 scanf("%d",&Ar[i]);
	 }
	       printf("\n\n Array before sorting: \n");
			for(i=0;i<=4;i++)
			{
				printf("%d \t",Ar[i]);				
		   	}
			 for(i=0;i<=4;i++)
			 {
				 temp=Ar[i];
				 j=i-1;
				 while(j>=0&& Ar[j]>temp)
				 {
					 Ar[j+1]=Ar[j];    
					 j--;
					
				 }
				  Ar[j+1]=temp;
			 }
			 printf("\n\n Array After sorting \n");
			 for(i=0;i<=4;i++)
			 {
				 printf("%d \t",Ar[i]);
			 }
	 return 0;
}
