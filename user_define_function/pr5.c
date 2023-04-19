#include<stdio.h>

int demo()
{
	float area,radius;
	
	printf("Enter radius : ");
	scanf("%f",&radius);
	
	area = 3.14 * radius * radius;
	
	printf("\n Area of cirle : %2.f ",area);
	
}

int main()
{
	demo();
}
