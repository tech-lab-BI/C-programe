#include<stdio.h>
void main(){
	int i,j,n,t,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=(n-i);j++){
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
	if(n%2==0){
		t=n/2;
		s=n-1;
	}
	else{
		t=n/2+1;
		s=n-2;
	}
	for(i=1;i<=(n*2);i++){
		for(j=1;j<=t;j++){
			printf(" ");
		}
		for(j=1;j<=s;j++){
			printf("*");
		}
		printf("\n");
	}
}
