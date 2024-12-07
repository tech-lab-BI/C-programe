#include<stdio.h>
#define biki 5
void main(){
	int a[biki],i,j,n;
	
	{//input part
	printf("How many values u want(max size 5):");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Before sorting Array values:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	}
	
	{//bubble sort	
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){//asending order
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	}
	
	{//output part
	printf("\nAfter sorting array values:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	}
}
