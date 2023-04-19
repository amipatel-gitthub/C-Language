#include<stdio.h>

int main()
{
	int n=4;
	int i,j;
	char ch='A';
	
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=4)
		{
			printf(" %c ",ch);
			
			if(ch<'P')
				ch++;
				
			else
				ch='A';
			j++;
		}
		i++;
		printf("\n");
	}
}