#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c,d;
	float x1,x2;
	printf("ax^2+bx+c enter equation coefficient:");
	scanf("%d%d%d",&a,&b,&c);
	if(a!=0){
		printf("The equation is quadratic.");
		d=pow(b,2)-(4*a*c);
		x1=((-b)+sqrt(d)/(2.0*a));
		x2=((-b)-sqrt(d))/(2.0*a);
		if(d>0){
			printf("\nThis equation has real & unequal roots|x1=%f,x2=%f",x1,x2);
		}
		else if(d=0){
			printf("\nThis equation has real & equal roots|x1=x2=%f",x1);
		}
		else	printf("\n This euqation has imaginary roots.");
	}
	else{
		x1=(-c)/b;
		printf("The equation is not quadratic ,x=%f",x1);
	}
}
