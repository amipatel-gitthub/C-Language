#include<stdio.h>

int demo(int ,int);

int main()
{
	int a,b,krish;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter b : ");
	scanf("%d",&b);
	
	krish = demo(a,b);
	printf(" Total sum : %d",krish);
	
	
}

int demo(int x,int y)
{
	return x+y;
}