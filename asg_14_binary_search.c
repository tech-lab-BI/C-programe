#include<stdio.h>
void main(){
	int a[20],n,i,key,l,u,mid,flag=0;
	printf("How many values you want(max 5):");
	scanf("%d",&n);
	printf("Enter %d values for array(asending order):\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Display the array values:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nEnter searching values:");
	scanf("%d",&key);
	l=0;u=n-1;	
	for(i=0;i<n;i++){
		mid=(l+u)/2;
			if(key==a[mid]){
				flag=1;
				break;
			}
			else if(key<a[mid])
					u=mid-1;
				 else
					l=mid+1;
	}
	if(flag==1)
		printf("%d is present in array at %d position",key,mid+1);
	else
		printf("%d is not present in array",key);
}
