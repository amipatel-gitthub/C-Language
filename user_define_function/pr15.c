#include<stdio.h>

int display(int m1, int m2, int m3, int total, float per)
{
	int grd;
	
	printf("\n sub-1 \t sub-2 \t sub-3 \t Total \t per \t Grade");
	printf("\n-----------------------------------------------");
	printf("\n %d \t %d \t %d \t %d \t %2.f% ",m1,m2,m3,total,per,grd);
	
	if(per>=75)
		printf("\t A ");

	else if(per>=60 && per<75)
		printf("\t B ");
	
	else if(per>=45 && per<60)
		printf("\t C ");
	
	else if(per>=35 && per<45)
		printf("\t D ");
	
	else if(per<35)
		printf("\t Fail ");
}



int clac(int m1, int m2, int m3)
{
	int total;
	float per;
	
	total = m1+m2+m3;
	per = total/3;
		
	
	
	display(m1,m2,m3,total,per);
	
}


int setdata()
{
	int m1,m2,m3;
	
	printf("Enter number : ");
	scanf("%d",&m1);
	
	printf("\nEnter number : ");
	scanf("%d",&m2);
	
	printf("\nEnter number : ");
	scanf("%d",&m3);
	
	clac(m1,m2,m3);
}

int main()
{
	setdata();
}