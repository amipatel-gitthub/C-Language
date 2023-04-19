#include<stdio.h>

int main()
{
	int i,n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("\t %d",i);
		i*=2;
	}
	
	
}