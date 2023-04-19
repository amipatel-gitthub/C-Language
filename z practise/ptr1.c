#include<stdio.h>

int main()
{
	int a=1, *b;
	
	b = &a;
	
	printf("\n Value of a : %d ",a);
	
	printf("\n\n Address of a : %u",&a);
	
	printf("\n\n Address of a using a : %u ", &a);
	
	printf("\n\n Address of b : %u ",&b);
	
	printf("\n\n Value of a using b : %d",*b);
}