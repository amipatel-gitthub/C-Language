#include<stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	i=1; 
	while(i<=n)
	{
		if(i%2 == 0)
		{
			printf("\n\t%d ",i);
			sum += i;
		}
		i++;
			
	}
	printf("\n\t\t Sum : %d",sum);
}