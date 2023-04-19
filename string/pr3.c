#include<stdio.h>

int main()
{
	char a[10],b[200];
	int i,k,j;
	
	printf("Enter string : ");
	gets(a);
	
	for(i=0; a[i]!='\0'; i++);
	k=i;
	
	for(j=0; j<i; j++)
	{
		b[j] = a[--k];
	}
	
	b[i]='\0';
	
	printf("\n\t Reverse string : %s",b);
}