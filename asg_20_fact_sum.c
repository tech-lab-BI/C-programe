#include<stdio.h>
int fact(int);
void main(){
	int n,f;
	printf("Enter the last number of factorial:");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial of %d=%f",n,(1.0/f));
}
int fact(int n){
	int i,s=1;
	for(i=1;i<=n;i++)
		s*=i;
	return s;
}
