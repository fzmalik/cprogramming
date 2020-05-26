#include<stdio.h>
int main()
{
	     int a[3][3],b[3][3],c[3][3],i,j,k;
         printf("\n Enter elements in first matrix :-");
		 for(i=0;i<3;i++)
		 {
			 for(j=0;j<3;j++)
			 {
				 scanf("%d",&a[i][j]);
				 printf("\t");
			 }
			 printf("\n");
		 }
		 printf("\n Enter the elements in second matrix :-");
		 for(i=0;i<3;i++)
		 {
			 for(j=0;j<3;j++)
			 {
				 scanf("%d",&b[i][j]);
				 printf("\t");
			 }
			 printf("\n");
		 }
		 printf("\n Resultant matrix :-\n ");
		 for(i=0;i<3;i++)
		 {
			 for(j=0;j<3;j++)
			 { 
		         c[i][j]=0;
		         for(k=0;k<3;++k)  
				 c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				 printf("%d \t",c[i][j]);
			 }
			 printf("\n");
		 }
	return 0;	
}