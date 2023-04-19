#include<stdio.h>

int sum(int a[],int n)
{
	int total=0,i;
	
	for(i=0; i<n; i++)
	{
		if( i != 0)
		{
			total = a[i] +a[i-1];
			printf("\n %d : %d ",a[i],total);
		}
		else
			printf("\n %d ",a[i]);
	}
}

int main()
{
	int a[20],i,n;
		
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf(" Enter a[%d]  : ",i);
		scanf("%d",&a[i]);
	}
	
	sum(a,n);
}
