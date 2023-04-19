#include<stdio.h>

void main()
{
	int n,i=1;

	printf("Enter table of number : ");
	scanf("%d",&n);
	
	ilesh:
		if(i<=10)
		{
			printf("\n %d * %d = %d",n,i,n*i);
			i++;
			goto ilesh;
		}
		n++;
		i=1;
		
	krish:
		if(i<=10)
		{
			printf("\n %d * %d = %d",n,i,n*i);
			i++;
			goto krish;
		}
	
}