#include<stdio.h>

int main()
{
	int n,i,s=1,t=1;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	printf("\t %d",t);
	
	i=2;
	while(i<=n)
	{
		s *= 2;
		t = s*i;
		printf("\t %d ",t);
		i++;
	}
}