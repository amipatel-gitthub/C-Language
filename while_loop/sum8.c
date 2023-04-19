#include<stdio.h>

int main()
{
	int s,d;
	
	s=65;
	d=97;
	
	while(s<=90 && d<=127)
	{
		printf("\t %c %c ",s,d);
		
		s += 4;
		d += 4;
	}
}