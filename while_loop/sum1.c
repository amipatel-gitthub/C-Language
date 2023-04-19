#include<stdio.h>

int main()
{
	int i,n,s;
	
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	i=1; 
	while(i<=n)
	{
		s=i*i;
		printf("\t %d",s);
		i++;
	}
}