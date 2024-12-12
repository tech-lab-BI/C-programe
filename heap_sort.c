#include<stdio.h>
void heapify(int a[],int n,int i){
	int temp,l,r,max;
	max = i;
	l = 2*i + 1;
	r = 2*i + 2;
	if(l<n && a[l]>a[max])
		max = l;
	if(r<n && a[r]>a[max])
		max = r;
	if(max != i){
		temp = a[i];
		a[i] = a[max];
		a[max] = temp;
		heapify(a,n,max);
	}
}
void heap_sort(int a[],int n){
	int temp,i;
	for(i=n/2-1;i>=0;i--)
		heapify(a,n,i);
	for(i=n-1;i>0;i--){
		temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		heapify(a,i,0);
	}
}
int main(){
	int a[10],n,i;
	printf("How many element u insert:");
	scanf("%d",&n);
	printf("Enter elements :: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	heap_sort(a,n);
	
	printf("Sorrted array :: ");
	for(i=0;i<n;i++)
		printf("%d	",a[i]);
	
	return 0;
}
