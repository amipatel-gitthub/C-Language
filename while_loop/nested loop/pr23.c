#include<stdio.h>

int main()
{
	int i,j,n=1;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(n % 2 != 0)
			{
				printf(" 1 ");
			}
			else
			{
				printf(" 0 ");
			}
			n++;
			j++;
		}
		i++;
		printf("\n");
	}
}