#include<stdio.h>

int main()
{
	char a[10];
	int i;
	
	printf("Enter string : ");
	//scanf("%s",&a);
	gets(a);
	
	printf("your string is %s ",a);
	//puts(a);
	
	for(i=0; a[i] != '\0'; i++);
	printf("\n String length is %d ",i);
}