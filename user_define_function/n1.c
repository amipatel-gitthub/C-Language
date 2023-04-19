#include<stdio.h>
							//no argument ,no return value
int demo()
{
	int l,area;
	
	printf("Enter number : ");
	scanf("%d",&l);
	
	area = l*l;
	printf("\n Area of SQUARE : %d",area);
}

int main()
{
	demo();
}
