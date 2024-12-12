#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int a[10],n,i,j,t;
	
	printf("how many element u want :- ");
	scanf("%d",&n);
	
	printf("Array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Target = ");
	scanf("%d",&t);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((a[i] + a[j]) == t){
				printf("index=[%d,%d]",i,j);
				exit(0);
			}
		}
	}
	
	printf("Target not in array!!");
}
