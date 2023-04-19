#include<stdio.h>

int demo()
{
	int days,year,week;
	
	printf(" Enter days : ");
	scanf("%d",&days);
	
	year = days/365;
	days = days - (year*365);
	week = days/7;
	days = days - (week*7);
	
	printf("\n year : %d",year);
	printf("\n week : %d",week);
	printf("\n Days : %d",days);
}

int main()
{
	demo();
}