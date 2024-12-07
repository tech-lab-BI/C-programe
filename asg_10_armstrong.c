#include<stdio.h>
#include<math.h>
void main(){
	int n,rem=0,s=0,i,a;
	printf("Checking number:");
	scanf("%d",&n);
	for(i=n;(i%10)!=0;i/=10)
		rem++;
	for(i=n;i!=0;i/=10){
		a=i%10;
		s+=pow(a,rem);
	}
	if(n==s)
		printf("%d is a amstrong number.",n);
	else
		printf("%d is not a amstrong number.",n);
}
