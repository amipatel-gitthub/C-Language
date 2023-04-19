#include<stdio.h>

int demo()
{
	float amt,rt,time,total;
	
	printf(" Enter amount : ");
	scanf("%f",&amt);
	
	printf("\n Enter rate : ");
	scanf("%f",&rt);
	
	printf("\n Enter year : ");
	scanf("%f",&time);
	
	total = (amt * rt * time)/100;
	
	printf("\n Simple intrest is : %2.f ",total);
}

int main()
{
	demo();
}