#include<stdio.h>

int demo()
{
	int rupee,paisa;
	float pr;
	
	printf("Enter price : ");
	scanf("%f",&pr);
	
	rupee = pr;
	paisa = ((float)pr - rupee) * 100;
	
	printf("\n price : %f ",pr);
	printf("\n rupees : %d",rupee);
	printf("\n paisa : %d",paisa);
	
}

int main()
{
	demo();
	
}