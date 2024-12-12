#include<stdio.h>
void main(){
	int i,j,n,h;
	scanf("%d",&n);
	h=(n/2)+1;
	if(n%2!=0){
		for(i=1;i<=h;i++){
			for(j=1;j<=(h-i);j++)
				printf(" ");
			for(j=1;j<=(2*i)-1;j++)
				printf("*");
			printf("\n");
		}
		for(i=h+1;i<=n;i++){
			for(j=1;j<=i-h;j++)
				printf(" ");
			for(j=1;j<=(2*(n-i))+1;j++)
				printf("*");
			printf("\n");
		}
	}
	else{
		printf("It`s only for odd input");
	}
}
