#include<stdio.h>

int demo();

int main()
{
	int i;
	
	printf("\n\tReverse number : %d ",demo(i));
}


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
	
	return i;
	
}

