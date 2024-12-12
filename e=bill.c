#include<stdio.h>
int main(){
	int unit, charge ;
	printf("How much unit u consume :");
	scanf("%d",&unit);
	if(unit < 100)
		charge = 0;
	else if(unit < 200)
		charge = unit * 1.20 ;
	else if(unit < 400)
		charge = unit * 1.50 ;
	else if(unit < 600){
		charge = unit * 1.80 ;
		charge *= 0.15 ;
		}
	else{
		charge = unit * 2.00 ;
		charge *= 0.15 ;
	}
	if(charge == 0)
		printf("NO need to payment");
	else
		printf("Your chagrge = %d",charge);	
}
