#include <stdio.h>

int main() {
	
    int n,digit,sum;
    scanf("%d", &n);
    while(n > 0)
{
    digit = n % 10;
    sum = sum + digit;
    n = n/10;
}
printf("%d\n",sum);
    return 0;
}
