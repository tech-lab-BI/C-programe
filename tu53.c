#include<stdio.h>
void main(){
	int i,j,n,sp,st;
	scanf("%d",&n);
	sp=n/2;
	st=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=st;j++)
			printf("*");
		if(i<=n/2){
			sp--;
			st+=2;
		}
		else{
			sp++;
			st-=2;
		}
		printf("\n");
	}
	st=n/2;
	for(i=(n/2)-1;i>=1;i--){
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<=st;j++)
			printf("*");
		st+=2;
		printf("\n");
	}
}
