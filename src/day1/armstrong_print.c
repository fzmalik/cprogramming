#include<stdio.h>
int main()
 {
      int n,m,d,s=0;
      for(n=1;n<=1000;n++)
	  {		  
     m=n;
	 s=0;
     while(m>0)
	
     {
       d=m%10;
       s=s+d*d*d;
       m=m/10;
      }
       if(s==n)
       {
         printf("\n %d",s);
        }
	  }
      return 0;
 }
