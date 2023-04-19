#include<stdio.h>

int demo(int);

int main()
{
	int amt;
	
	printf("Enter amount : ");
	scanf("%d",&amt);

	demo(amt);
}

int demo(int n)
{
	int rupee[]={2000,500,200,100,50,20,10,5,2,1};
	
	int i,a,b=0;
	
	for(i=0; i<10; i++)
	{
		if(n >= rupee[i])
		{	
			a=n/rupee[i];
			b=b + a;
			printf(" \n\t ₹ %d : %d ",rupee[i],b);
			n = n % rupee[i];
			b = b-a;
		}
	}
	
}
