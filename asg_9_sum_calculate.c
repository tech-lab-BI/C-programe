#include<stdio.h>
#include<math.h>
void main(){
	int n,i,sum=0,j,a;
	printf("How long sum(x) u want:");
	scanf("%d",&n);
	while(i<=n){
		sum+=pow(i,i);
		++i;//i++;
	}
	printf("SUM=%d",sum);
}
