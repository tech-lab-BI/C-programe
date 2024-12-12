#include<stdio.h>
void main(){
	int i,j,n,n1,n2;
	scanf("%d",&n);
	n1=n/2+1;
	n2=n/2;
	for(i=1;i<=n1;i++){
		for(j=1;j<=n1-i;j++)
			printf(" ");
		printf("*");
		if(i>1){
			for(j=1;j<=2*i-3;j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	for(i=1;i<=n2;i++){
		for(j=1;j<=i;j++);
	}
			printf(" ");
		printf("*");
		for(j=1;j<=2*(n2-i)-1;j++)
			printf(" ");
		if(i!=n2)
			printf("*");
		printf("\n");
	}
}

