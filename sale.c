#include<stdio.h>

int main(){
	
	float vat=107.0/100.0;
	float price1,price2,price3;
	scanf("%f",&price1);
	printf("%.2f\n", (price1*vat)*95/100);
	scanf("%f",&price2);
	printf("%.2f\n",(price1*vat+price2*vat)*85/100);
	scanf("%f",&price3);
	printf("%.2f\n",(price1*vat+price2*vat+price3*vat)*70/100);
	
	return 0;
}
