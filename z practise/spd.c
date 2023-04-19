#include<stdio.h>

int main()
{
	char a[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}},c;
	
	int i,j,n,cny=1;
	
	for(i=0; i<3; i++)
	{
		for(j=0; i<3; j++)
		{
			printf("\t %c ",a[i][j]);
		}
		printf("\n\n");
	}
	
	task:
	printf("ask choice - ");
	
	flushall();
	
	scanf("%c",&c);
	
	cnt = cnt + i;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(c==a[i][j])
			{
				if(cnt%2 == 0)
				{
					a[i][j]="*";
				}
				else
				{
					a[i][j]="#";
				}
			}                                            
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t%c",a[i][j]);
		}
		printf("\n\n");
	}
	
	if(a[0][0]=="*" && a[0][1]=="*" && a[0][2]=="*")
	{
		printf(" X is winner ");
		goto c;
	}
	
	else if(a[1][0]=="*" && a[1][1]=="*" && a[1][2]=="*")
	{
		printf(" X is winner ");
		goto c;
	}
	
	else if(a[2][0]=="*" && a[2][1]=="*" && a[2][2]=="*")
	{
		printf(" X is winner ");
		goto c;
	}
	
	else if(a[0][1]=="*" && a[1][1]=="*" && a[2][1]=="*")
	{
		printf(" X is winner ");
		goto c;
	}
	
	else if(a[0][0]=="*" && a[1][0]=="*" && a[2][0]=="*")
	{
		printf(" X is winner ");
		goto c;
	}
	
	//.............
	
	if(a[0][0]=="#" && a[1][0]=="#" && a[2][0]=="#")
	{
		printf(" Y is winner ");
		goto c;
	}
	
	else if(a[1][0]=="#" && a[1][1]=="#" && a[2][1]=="#")
	{
		printf(" Y is winner ");
		goto c;
	}
	
	else if(a[0][2]=="#" && a[1][2]=="#" && a[2][2]=="#")
	{
		printf(" Y is winner ");
		goto c;
	}
	
	else if(a[0][0]=="#" && a[1][1]=="#" && a[2][2]=="#")
	{
		printf(" Y is winner ");
		goto c;
	}
	
	else if(a[0][2]=="#" && a[1][1]=="#" && a[2][0]=="#")
	{
		printf(" Y is winner ");
		goto c;
	}
	
	if(cnt<9)
	{
		cnt++;
		goto task;
	}
	
	c:
	getch();
		
}