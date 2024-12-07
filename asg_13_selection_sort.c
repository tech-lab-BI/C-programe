#include<stdio.h>
#define biki 5
void main(){
	int a[biki],i,j,n,min_index;
	printf("How many values u want(max size 5):");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Before sorting Array values:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		
		
		
	//selection sort
	for(i=0;i<n-1;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
			if(a[min_index]>a[j])
				min_index=j;
		}
		if(i!=min_index){
			a[i]=a[i]^a[min_index];
			a[min_index]=a[i]^a[min_index];
			a[i]=a[i]^a[min_index];
		}
	}
	
	
	
	
	printf("\nAfter sorting array values:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
