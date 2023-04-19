#include<stdio.h>

int main()
{
	int i,j,k=1;
	
	i=1;
	while(i<=4)
	{
		j=1;
		while(j<=4)
		{
			printf("\t %d ",k++);
			j++;
		}
		i++;
		printf("\n");
	}
}