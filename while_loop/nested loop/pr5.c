#include<stdio.h>

int main()
{
	int i,j;
	
	i=1;
	while(i<=4)
	{
		j=1;
		while(j<=4)
		{
			printf(" * ");
			j++;
		}
		i++;
		printf("\n");
	}
	
}