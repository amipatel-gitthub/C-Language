#include<stdio.h>

int demo()
{
	float rate,qty,amt,dis,billamt,gst,netbill;
	
	printf("rate : ");
	scanf("%f",&rate);
	
	printf("\n Qty : ");
	scanf("%f",&qty);
	
	amt = rate * qty;
	dis = (amt * 5)/100;
	billamt = amt - dis;
	gst = (billamt * 18)/100;
	netbill = billamt + gst;
	
	printf("\n rate \t Qty \t amt \t dis \t billamt  gst \t netbill");
	printf("\n "),
	
	printf("\n %2.f \t %2.f \t %2.f \t %2.f \t %2.f \t %2.f \t %2.f",rate,qty,amt,dis,billamt,gst,netbill);
	
}

int main()
{
	demo();
	
}