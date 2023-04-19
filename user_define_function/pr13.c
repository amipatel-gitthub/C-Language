#include<stdio.h>

// with argument without return 

int demo(int, int);

int main()
{
	int x,y;
	
	printf("Enter x : ");
	scanf("%d",&x);
	
	printf("Enter y : ");
	scanf("%d",&y);
	  
	demo(x,y);
		
}

int demo(int a, int b)
{
	int add;
	add = a+b;
	printf("Total sum : %d",add);
}