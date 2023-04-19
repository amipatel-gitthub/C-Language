#include<stdio.h>

int main()
{
	/*int a=1,*b,x=20,*c,sum;
	
	b = &a;
	c = &x;
	
	sum = *b + *c;
	
	printf("\n Sum : %d",sum);*/
	
	
	int a,x,*b,*c,sum;
	
	printf("Enter number : ");
	scanf("%d",&a);
	
	printf("\nEnter number : ");
	scanf("%d",&x);
	
	b = &a;
	c = &x;
	
	sum = *b + *c;
	
	printf("\n Sum : %d",sum);
}