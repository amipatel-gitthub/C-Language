#include<stdio.h>

int main()
{
	char i,j,k=65;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(j % 2 == 0)
			{
				printf(" %c ",k++);
			}
			else
			{
				printf(" %c ",k+32);
				k++;
			}
			j++;
		}
		i++;
		printf("\n");
		
	}
}