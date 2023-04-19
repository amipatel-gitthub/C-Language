#include<stdio.h>

int demo()
{
	int a,b,c;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("\nEnter B : ");
	scanf("%d",&b);
	
	printf("\nEnter C : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		return a;
	}
	
	else if(b>c )
	{
		return b;
	}
	
	else
	{
		return c;
	}
}

int main()
{
	int k;
	k = demo();
	printf("\n Largest number is : %d ",k);
}