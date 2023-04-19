#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[100];
	int m,s,e;
	int total;
	float per;
};

int main()
{
	int i;
	struct student krish[5];
	
	for(i=0; i<2; i++)
	{
		printf("enter id : ");
		scanf("%d",&krish[i].id);
		
		printf("enter Name : ");
		scanf("%s",&krish[i].name);
		
		printf("enter mark : ");
		scanf("%d",&krish[i].m);
		
		printf("enter mark : ");
		scanf("%d",&krish[i].s);
		
		printf("enter mark : ");
		scanf("%d",&krish[i].e);
	}
	
	printf("id \t Name \t Maths \t Science  English  Total \t Per ");
	
	for(i=0; i<1; i++)
	{
		krish[i].total = krish[i].m + krish[i].s + krish[i].e;
		
		krish[i].per = (float)krish[i].total*100/300;
		
		printf("\n %d \t %s \t %d \t %d \t %d \t %d \t %.2f", krish[i].id, krish[i].name , krish[i].m, krish[i].s, krish[i].e, krish[i].total, krish[i].per);
	
	}
	
}


