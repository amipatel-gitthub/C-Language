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
			if(j>i)
				printf(" * ");
				
			else
				printf(" %d ",i);
				
			j++;
		}
		i++;
		printf("\n");
	}
}