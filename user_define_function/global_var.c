#include<stdio.h>

	int m,s,e,total;
	float per;
	
void display()
{
	printf("\n Maths \t Science English Total \t Per. ");
	
	printf("\n %d \t %d \t %d \t %d \t %2.f", m,s,e,total,per);
}

void clac()
{
	total = m+s+e;
	per = total / 3;
	display();
}

void setdata()
{
	printf("Enter mark : ");
	scanf("%d",&m);
	
	printf("\nEnter mark : ");
	scanf("%d",&s);
	
	printf("\nEnter mark : ");
	scanf("%d",&e);
	
	clac();
}

int main()
{
	setdata();
}

