#include<stdio.h>

int main()
{
	int a=0,b=1,c,n,i;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	printf("%d",b);
	
	for(i=1; i<=n; i++)
	{
		c = a+b;
		printf("\t %d",c);
		
		a = b;
		b = c;
	}
}