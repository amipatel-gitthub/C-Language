#include<stdio.h>

int main()
{
	char i,j;
	
	i=65;
	while(i<=69)
	{
		j=65;
		while(j<=i)
		{
			printf(" %c ",j);
			j++;
		}
		i++;
		printf("\n");
	}
}