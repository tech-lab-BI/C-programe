#include<stdio.h>
void main(){
	int a[5],i,n,key,flag=0;
	printf("How many values u want:");
	scanf("%d",&n);
	printf("Enter %d values for array:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Display the array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n Enetr searching values:");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("%d values present in array at %d position.",key,i+1);
	else
		printf("%d is not present in array",key);
}
