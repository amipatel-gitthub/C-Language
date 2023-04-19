#include<stdio.h>

int main()
{
	int i,j,k=65;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf(" %c ",k);
			k++;
			j++;
		}
		i++;
		printf("\n");
	}
}