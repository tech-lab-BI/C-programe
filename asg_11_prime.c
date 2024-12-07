#include<stdio.h>
void main(){
	int n,i,flag=0;
	printf("Checking prime number:");
	scanf("%d",&n);
	if(n==1||n==0)
		flag=1;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("%d is a not prime number.",n);
	else
		printf("%d is prime number.",n);
}
