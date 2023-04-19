#include<stdio.h>

int demo(int);

int main()
{
	int no;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	a(no);
}



int demo(int n)
{
	int sum=0,i,a;
	
	for(i=1; i<n; i++)
	{
		a=n%i;
		
		if(a==0)
		{
			sum =sum + i;
		}
	}	
		if(sum==n)
			printf("\n\t %d is perfect number ",i);
			
		else
			printf("\n\t %d is not perfect number ",i);
	
}

