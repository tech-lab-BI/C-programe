#include<stdio.h>

int gcd(int a,int b){
	int r = a % b;
	if(r == 0){
		return b;
	}
	else{
		gcd(b,r);
	}
}

void main(){
	
	int a,b,r;
	printf("Enter two number :- ");
	scanf("%d %d",&a,&b);
	r = gcd(a,b);
	printf("%d ",r);
	
}
