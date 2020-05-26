#include <stdio.h>
#include <stdbool.h>
#include "q2.h"


int main()
{
	char a;
	printf("enter a char: \n");
	scanf("%c",&a);
	
	bool result = containsVowel(a); 
	
	printf("%c is vowel %d ",a , result );
	
	return 0;
	
}