#include<stdio.h>

int main()
{
	char i,j;
	
	i=65;
	while(i<=68)
	{
		j=65; 
		while(j<=68)
		{
			printf(" %c ",j);
			j++;
		}
		i++;
		printf("\n");
	}
}