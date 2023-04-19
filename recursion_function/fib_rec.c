#include<stdio.h>

int series(int n)
{
	if(n==0)
		return 0;
	
	else if(n==1)
		return 1;
	
	else
		return(series(n-1) + series(n-2));
	
	
}

int main()
{
	int i,n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf(" %d ",series(i));
		
	}
		
}