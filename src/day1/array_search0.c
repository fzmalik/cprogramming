#include<stdio.h>
int main()
{
	 int Ar[5],i,a,count=0;
	 for(i=0;i<=4;i++)
	 {
		 printf("\n Enter the %d Number : ",i+1);
		 scanf("%d",&Ar[i]);
	 }
	 printf("Enter the number you want to search");
	 scanf("%d",&a);
	 for(i=0;i<=4;i++)
	 {
		 if(Ar[i]==a)
		 {
			 count++;
		 }
	 }
	 if(count!=0)
	 {
		 printf("Entered Number is found ");
	 }
	 else
	 {
		 printf("Entered Number is not found ");
	 }
	 return 0;
}