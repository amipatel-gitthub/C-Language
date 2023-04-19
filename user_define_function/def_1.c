#include<stdio.h>

int demo()
{
	int n,i=0,j;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		j = n % 10;
		
		i = i * 10 + j;
		
		n/=10;
	}
	
	printf("Reverse number : %d \t",i);
	
}

int main()
{
	demo();
}