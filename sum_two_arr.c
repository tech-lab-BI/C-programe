#include<stdio.h>

void main(){
	int a[10],b[10],x,n,i;
	
	printf("Enter how many elements u want :- ");
	scanf("%d",&n);
	
	printf("Enter 1st array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter 2nd array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	//result part
	for(i=0;i<n;i++){
		printf("%d+%d=%d",a[i],b[i],a[i]+b[i]);
		printf("\n");
	}
	
}
