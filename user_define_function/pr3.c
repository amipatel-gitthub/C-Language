#include<stdio.h>

int demo()
{
	float ft,inch;
	
	printf("\n Enter feet : ");
	scanf("%f",&ft);
	
	inch = ft * 12;
	printf("\n inches are : %2.f ",inch);
	
}

int main()
{
	demo();
}