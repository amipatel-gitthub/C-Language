#include<stdio.h>

int demo(int);

int main()
{
	int no;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	demo(no);
}



int demo(int n)
{
	int sum=0,i,a;
	
	for(i=1; i<n; i++)
	{
		a=n%i;
		
		if(a==0)
		{
			printf(" \n %d",i);
			sum += i;
		}
	}	
		if(sum==n)
			printf("\n\t %d is perfect number ",i);
			
		else
			printf("\n\t %d is not perfect number ",i);
		
		
	
}






/*#include<stdio.h>

int demo()
{
	int no,sum=0,i,a;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	for(i=1; i<no; i++)
	{
		a=no%i;
		
		if(a==0)
		{
			sum =sum + i;
		}
	}	
		if(sum==no)
			printf("\n\t %d is perfect number ",i);
			
		else
			printf("\n\t %d is not perfect number ",i);
	
}

int main()
{
	demo();
}*/