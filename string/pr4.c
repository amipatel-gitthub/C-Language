#include<stdio.h>

int main()
{
	char a[10],b[200],c[50];
	int i,j,k;
	
	printf("Enter 1 string : ");
	gets(a);
	
	printf("\nEnter 2 string : ");
	gets(b);
	
	for(i=0; a[i] != '\0'; i++);
		//printf("\n\t 1st lenght : %d ",i);
	
	for(j=0; b[j] != '\0'; j++)
	{	//printf("\n\t 2nd lenght : %d ",j);
		
		a[i] = b[j];	
		i++;
	}
	a[i] = '\0';
	printf("\n\t sum : %s ",a);
	
}