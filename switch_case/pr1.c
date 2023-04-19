#include<stdio.h>
void main()
{
	int a,b,ch;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	printf("Enter b : ");
	scanf("%d",&b);
	
	printf("\n1. Addition ");
	printf("\n2. Substraction " );
	printf("\n3. Multiplication ");
	printf("\n4. Division ");
	
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1 : 
			printf("\n Addition of A and B : %d",a+b);
			break;
			
		case 2 : 
			printf("\n Substraction of A and B : %d",a-b);
			break;
			
		case 3 : 
			printf("\n Multiplication of A and B : %d",a*b);
			break;
			
		case 4 : 
			printf("\n Division of A and B : %d",a/b);
			break;
			
		default:
			printf("\n Your choice is wrong..... ");
			break;
	}
}