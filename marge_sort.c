#include<stdio.h>
void marge(int a[],int l,int m,int r){
	int i,j,k,n1,n2;
	n1 = m - l + 1;
	n2 = r - m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++){
		L[i] = a[l+i];
	}
	for(j=0;j<n2;j++){
		R[j] = a[m+1+j];
	}
	i=j=0;
	k = l;
	while(i < n1 && j<n2){
		if(L[i]<=R[j]){
			a[k] = L[i];
			i++;
		}
		else{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		a[k] = L[i];
		i++;
		k++;
	}
	while(j < n2){
		a[k] = R[j];
		j++;
		k++;
	}
	
}
void marge_sort(int a[],int l,int r){
	if(l<r){
		int m = l + (r-l)/2;
		marge_sort(a,l,m);
		marge_sort(a,m+1,r);
		marge(a,l,m,r);	
	}
}
int main(){
	int i,n,a[10],l,r;
	printf("How many ::");
	scanf("%d",&n);
	printf("Elements ::");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	l = 0;
	r = n-1;
	marge_sort(a,l,r);
	printf("Sortted elements::");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}