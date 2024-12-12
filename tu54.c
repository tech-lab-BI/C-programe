#include<stdio.h>
void main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i==1||i==n){
			for(j=1;j<=n;j++)
				printf("*");
		}
		else{
			printf("*");
			for(j=1;j<=n-2;j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
}
