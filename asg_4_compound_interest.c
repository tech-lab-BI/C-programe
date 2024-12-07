#include<stdio.h>
#include<math.h>
void main(){
	float p,r,t,amt;
	printf("Enter principle amount,rate of interest,time in year:");
	scanf("%f%f%f",&p,&r,&t);
	amt=p*pow((1+(r/100)),t);
	printf("%d",amt);
}
