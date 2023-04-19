#include<stdio.h>

int demo()
{
	float inch,cen;
	
	printf(" enter inches : ");
	scanf("%f",&inch);
	
	cen = inch * 2.54;
	printf("centemeters are : %2.f",cen);
	
}

int main()
{
	demo();
}