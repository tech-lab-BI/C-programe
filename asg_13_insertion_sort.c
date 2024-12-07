#include<stdio.h>
void main(){
	{//input part
	int a[5],n,i,j,val;
	printf("How many values u want:");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Before sorting array values:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	}
			
	{//insertion sort
	int i,n,val,j,a[5];
	for(i=1;i<n;i++){
		val=a[i];
		j=i-1;
		while(j>=0&&a[j]>val){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=val;
	}
	}
	
	{//output part
	int i,n,a[5];
	printf("\nAfter sorting array values:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	}
}
