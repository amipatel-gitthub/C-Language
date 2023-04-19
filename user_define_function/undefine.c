#include<stdio.h>

int d1(int , int);
int d2(int , int);
int d3(int , int);
int d4(int , int);

int main()
{
	int x,y;
	
	
	printf("Enter number : ");
	scanf("%d",&x);
	
	printf("\nEnter number : ");
	scanf("%d",&y);
	
	printf("\n\t Substraction : %d ",d1(x,y));
	
	printf("\n\t Abstraction : %d ",d2(x,y));
	
	printf("\n\t Multiplication : %d ",d3(x,y));
	
	printf("\n\t Division : %d ",d4(x,y));
}

int d1(int a, int b)
{
	int result;
	result=a+b;
	return result;
}

int d2(int a, int b)
{
	int result;
	result=a-b;
	return result;
}

int d3(int a, int b)
{
	int result;
	result=a*b;
	return result;
}

int d4(int a, int b)
{
	int result;
	result=a/b;
	return result;
}
