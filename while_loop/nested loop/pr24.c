#include<stdio.h>

int main()
{
	int n=5;
	int i,j;
	
	i=0;
	while(i<n)
	{
			j=i;
			while(j>=0)
			{
				printf(" %c ",j+65);
				j--;
			}
			i++;
			printf("\n");
	}
}