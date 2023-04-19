#include<stdio.h>

int demo()
{
	int area,side;
	
	printf("Enter length of square : ");
	scanf("%d",&side);
	
	area = side * side;
	printf("\n area is : %d ",area);

}

int main()
{
	demo();
}