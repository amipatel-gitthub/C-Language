#include<stdio.h>

int main()
{
	char a[100],b[150];
	int i,j,k;
	
	printf("Enter word : ");
	gets(a);
	
	for(i=0; a[i] != '\0'; i++);
	
	printf("\n\t length : %d \n",i);

	for(j=0; j<(i/2); j++)
	{
		printf(" %c %c",a[j],a[(i-1)-j]);
	}
	
	if(i % 2 != 0)
	{
		printf(" %c",a[(i/2)]);
		
	}
	
}