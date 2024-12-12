#include<stdio.h>
void main(){
	int i,j,n,h;
	scanf("%d",&n);
	if(n%2!=0){
		h=(n/2)+1;
		for(i=1;i<=n;i++){
			if(i<h+1){
				for(j=1;j<=i-1;j++)
					printf(" ");
				for(j=1;j<=n+2-(2*i);j++)
					printf("*");
				printf("\n");
			}
			else{
				for(j=1;j<=n-i;j++)
					printf(" ");
				for(j=1;j<=i-(n-i);j++)
					printf("*");
				printf("\n");
			}
		}
	}
	else{
		printf("It`s not work for even no");
	}
}
