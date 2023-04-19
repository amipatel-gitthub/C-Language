#include<stdio.h>
int main()

{
	int a=1,*b;
	b = &a;
	
	printf(" value of a : %d",a);
	printf("\n Address of a : %u",&a);

	printf("\n Adress of a using b : %u",b);
	printf("\n Adress of b : %u",&b);
	printf("\n Value of a using b : %d",*b);
}