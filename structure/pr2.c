#include<stdio.h>
#include<string.h>

struct bill
{
	char prd[100];
	int qty;
	float rate,amt,dis,billamt,gst,netbill;
};

int main()
{
	int i;
	float total=0;
	struct bill krish[5];
	
	for(i=0; i<2; i++)
	{
		printf("\nEnter Product_name : ");
		scanf("%s",&krish[i].prd);
		
		printf("Enter Rate : ");
		scanf("%f",&krish[i].rate);
		
		printf("Enter Quantity : ");
		scanf("%d",&krish[i].qty);
	}
	
	printf("\nPr_name\tRate\tqty\tamt\tdis.\tbill_amt\tgst\tnet_bill ");
	printf("\n-----------------------------------------------------------------------------------");
	
	for(i=0; i<2; i++)
	{
			krish[i].amt = krish[i].rate * krish[i].qty;
			
			krish[i].dis = (float)(krish[i].amt * 5)/100;
			
			krish[i].billamt = (float)krish[i].amt - krish[i].dis;
			
			krish[i].gst = (float)(krish[i].billamt * 18) / 100;
			
			krish[i].netbill = (float)krish[i].billamt + krish[i].gst;
			
			total = total + krish[i].billamt;
			
			printf("\n%s\t%.2f\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t\%.2f",krish[i].prd, krish[i].rate, krish[i].qty, krish[i].amt , krish[i].dis, krish[i].billamt, krish[i].gst, krish[i].netbill);   
			
			
	}
	printf("\n-----------------------------------------------------------------------------------");
	
	printf("\n\t\t Final_Ammount : %.2f",total);
	printf("\n-----------------------------------------------------------------------------------");
	printf("\n\t\t THANK YOU :) ");
	printf("\n\t\t PLEASE VISIT AGAIN ");
	printf("\n-----------------------------------------------------------------------------------");
}