#include<stdio.h>

int main()
{
	int d;
	float i,n,s=0.5;
	
	printf("Enter number : ");
	scanf("%f",&n);
	
	printf("%2f",s);
	
	i=0.5;
	
	while(i<=n)
	{
		s += i;
		if(d%2 == 0)
		{
			printf("\t%2.f",s);
		}
		else
		{
			printf("\t%2.f",s);
		}
		
		i++;
		d++;
	}
}