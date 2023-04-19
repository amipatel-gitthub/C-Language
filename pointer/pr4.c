#include<stdio.h>

int main()
{
	int a,b,*c,*d,i;
	
	printf("enter A : ");
	scanf("%d",&a);
	
	printf("enter B : ");
	scanf("%d",&b);
	
	
	c = &a;
	d = &b;
	
	i=*c;
	*c = *d;
	*d = i;
	
	printf("\t A : %d",*c);
	printf("\n\t B : %d",*d);
}