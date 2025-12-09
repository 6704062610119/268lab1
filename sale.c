#include<stdio.h>

int main(){
	
	float price1,price2,price3;
	scanf("%f",&price1);
	printf("%.2f\n", price1*95/100);
	scanf("%f",&price2);
	printf("%.2f\n",(price1+price2)*85/100);
	scanf("%f",&price3);
	printf("%.2f\n",(price1+price2+price3)*70/100);
	
	return 0;
}
