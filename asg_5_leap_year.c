#include<stdio.h>
void main(){
	int n;
	printf("Enter your year:");
	scanf("%d",&n);
	if(n%400==0)
		printf("%d is a leap year.",n);
	else if(n%100==0)
			printf("%d is not a leap year.",n);
	else if(n%4==0)
			printf("%d is a leap year.",n);
}
