#include<stdio.h>

int main()
{
	int i,j,n=11;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf(" %d ",n++);
			j++;
		}
		n += 5;
		i++;
		printf("\n");
		
	}
}