#include<stdio.h>
void main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		printf("*");
			for(j=1;j<=2*(i-1)-1;j++)
				printf(" ");
			if(i>1){
				printf("*");
			}
		printf("\n");
	}
		for(i=1;i<=n*2-1;i++)
			printf("*");
}
