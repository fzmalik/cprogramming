#include<stdio.h>
int main()
 {
      int n,m,d,s=0;
      printf("\n Enter the number .");
      scanf("%d",&n);
     m=n;
     while(n>0)
	
     {
       d=n%10;
       s=s*10+d;
       n=n/10;
      }
       if(s==m)
       {
         printf("\n entered number is palendrome" );
        }
       else
       printf("entered number is not palendrom");
      return 0;
 }
