#include<stdio.h>

int main()
{
	int i,j,k;
	
	i=1;
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			if(i%2 != 0)
			{
				printf(" %d ",i);
			}
			j++;
		}
		i++;
		printf("\n");
	}
}