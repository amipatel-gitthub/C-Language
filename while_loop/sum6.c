#include<stdio.h>

int main()
{
	int i,n,n1=0,n2=1,n3;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	printf("\n %d %d",n1,n2);
	
	i=2;
	while(i<=n)
	{
		n3=n1+n2;
		printf("\t %d",n3);
		
		n1=n2;
		n2=n3;
		i++;
	}
}