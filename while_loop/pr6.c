#include<stdio.h>

int main()
{
	int i, n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	i=n;
	while(i<=50)
	{	
		if(i%2 != 0)
				printf("\n %d",i);
		i++;
	}
		
}