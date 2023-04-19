#include<stdio.h>

						// no argument, with return value
						
int demo()
{
	int area,l;
	
	printf("Enter number : ");
	scanf("%d",&l);
	
	area = l*l;
	return area;
}

int main()
{
	int a;
	a = demo();
	printf("\n Area of SQUARE : %d",a);
}