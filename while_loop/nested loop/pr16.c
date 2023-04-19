#include<stdio.h>

int main()
{
	int i,j,k=1;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf(" %2d ",k++);
			j++;
		}
		i++;
		printf("\n");
	}
}