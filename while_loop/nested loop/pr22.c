#include<stdio.h>

int main()
{
	int i,j;
	
	i=5;
	while(i>=1)
	{
		j=i;
		while(j<=5)
		{
			printf(" %2d ",j);
			j++;
		}
		i--;
		printf("\n");
		
	}
}