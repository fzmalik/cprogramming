#include <stdio.h>
int f(num)
    {
        if(num<=1)
        {
            return 1;
        }
        else
            return num*f(num-1);
    }

int main()
    {
    
        int m,x;
        scanf("%d",&x);
        m=f(x),
        printf("result : %d",m);
        return 0;
    }
