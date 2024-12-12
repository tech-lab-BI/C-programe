#include<stdio.h>
void main(){
	int i,j,n;
	scanf("%d",&n);
	if(n%2==0){
		for(i=1;i<=n;i++){
			for(j=1;j<=n-i;j++)
				printf(" ");
			for(j=1;j<=(2*i)-1;j++)
				printf("*");
			printf("\n");
		}
		for(i=1;i<=2*n;i++){
			for(j=1;j<=n/2;j++)
				printf(" ");
			for(j=1;j<=(n/2)+1;j++)
				printf("*");
			printf("\n");
		}
	}
	else{
		printf("processing for odd");
	}
}
