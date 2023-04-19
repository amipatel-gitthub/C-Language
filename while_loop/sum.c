#include<stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		sum += i;
		
		i++;
	}
	printf("sum is : %d"0,sum);
}
