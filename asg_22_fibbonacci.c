#include<stdio.h>
int fibo(int);
void main(){
	int n,i;
	printf("Enter no. of fibonabcci:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%d",fibo(i));
}
int fibo(int x){
	if(x<=1)	return x;
	else	return fibo(x-1)+fibo(x-2);
}
