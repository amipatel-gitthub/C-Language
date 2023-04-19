#include<stdio.h>

#define n 5

int krish(int a[])
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\n a[%d] : %d ",i,a[i]);
	}
}

int main()
{
	int a[n],i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	krish(a);
}
