#include<stdio.h>

int main()
{
	FILE *fp;
	
	fp = fopen("Skill.txt","w+");
	fprintf(fp,"welcome to skillqode....\n");
	fputs("krish savaliya\n",fp);
	fputs("thanks for visit.....",fp);
	fclose(fp);
	
}
 
int main()
{
	FILE *fp;
	
	char buff[100];
	fp = fopen("Skill.txt","r");
	
	while(fscanf("%s",buff) != EOF)
	{
		printf("%s",buff);		
	}
	
	fclose(fp);
	
}