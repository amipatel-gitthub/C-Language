#include<stdio.h>

int demo()
{
	int a,b,c;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	printf("Enter b : ");
	scanf("%d",&b);
	
	return a*b;
	
}

int main()
{
	
	printf(" sum : %d",demo());
}