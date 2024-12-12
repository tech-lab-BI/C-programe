#include<stdio.h>
void main(){
	int n,i,a[10],x;
	a[i]=i=0;
	printf("Enter decimal number :: ");
	scanf("%d",&n);
	if(n<0)
		x = -n;
	else
		x = n;
	while(x != 0){
		printf("x=%d,i=%d",x,i);
		a[i] = x%2;
		x = x/2;
		i++;
	}
	if(n<0)
		a[i] = 1;
	else
		a[i] = 0;
	printf("\n  Binary code :\n");
	for(;i>=0;i--){
		printf("%d",a[i]);
	}
}
