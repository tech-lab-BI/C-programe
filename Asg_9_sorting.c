#include<stdio.h>
#include<stdlib.h>
#define max 20
int a[max],c[max];
int n;

void display(){
	int i;
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}

void bubble(){
	int i,j,temp,com=0;
	for(i=0;i<n-1;i++){
		printf("\npass=%d\n",i+1);
		for(j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			printf("\n");
				display(n);
				printf("\n");
		}
	}
}

void selection(){
	int i,j,temp,min,pos;
	for(i=0;i<n-1;i++){
		min = a[i];
		pos = i;
		printf("\npass=%d\n",i+1);
		for(j=i+1;j<n;j++){
			if(min > a[j]){
				min = a[j];
				pos = j;
				
			}
		}
		if(i != pos){
			temp = a[i];
			a[i] = a[pos];
			a[pos] = temp;
		}
		printf("\n");
		display(n);
		printf("\n");
	}
}

void insertion(){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp = a[i];
		j = i-1;
		printf("\npass=%d\n",i);
		while((j >= 0) && (a[j] > temp)){
			a[j+1] = a[j];
			j--;
			printf("\n");
			display(n);
			printf("\n");
		}
		a[j+1] = temp;
		printf("\n");
		display(n);
		printf("\n");
	}
}

int partition(int p,int r){
	int i=p,j=r,tem;
	int pivot = a[p];
	while(i<j){
		while(a[i] <= pivot){
			i++;
		}
		while(a[j] > pivot){
			j--;
		}
		if(i<j){
			tem = a[i];
			a[i] = a[j];
			a[j] = tem;
		}
	}
	tem = a[j];
	a[j] = a[p];
	a[p] = tem;
	printf("\n>>  ");
	display(n);
	printf("<<\n");
	return j;
}
void quicksort(int p,int r){
	if(p<r){
		int q = partition(p,r);
		quicksort(p,q-1);
		quicksort(q+1,r);
	}
}

void merge(int l,int m,int u){
	int i=l,j=m+1,k=l;
	while(i <= m && j <= u){
		if(a[i] < a[j]){
			c[k++] = a[i++];
		}
		else{
			c[k++] = a[j++];
		}
	}
	while(i <= m){
		c[k++] = a[i++];
	}
	while(j <= u){
		c[k++] = a[j++];
	}
	for(i=l;i<=u;i++){
		a[i] = c[i];
	}
	printf("\n>>  ");
	display(n);
	printf("<<\n");
}
void mergesort(int l,int u){
	if(l < u){
		int m = (l + u)/2;
		mergesort(l,m);
		mergesort(m+1,u);
		merge(l,m,u);
	}
}

void main(){
	
	int i,ch;
	
	while(1){
		
		printf("\nHow many element u insert : ");
		scanf("%d",&n);
		
		printf("Enter array elements :: ");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		printf(":::::MENU:::::");
		printf("\n1. Bubble\n2. Selection\n3. Insertion\n4. merge\n5. Quick\n\n");
		printf("Enter  chioce :: ");
		scanf("%d",&ch);
		
		printf("\n_______________________________________________\n");
		
		switch(ch){
			case 1:
				bubble(n);
				printf("\nBubble sort :-   ");
				display(n);
				break;
			case 2:
				selection(n);
				printf("\nSelection sort :-   ");
				display(n);
				break;
			case 3:
				insertion(n);
				printf("\nInsertion sort :-   ");
				display(n);
				break;
			case 4:
				mergesort(0,n-1);
				printf("\nMerge sort :-   ");
				display(n);
				break;
			case 5:
				quicksort(0,n-1);
				printf("\nQuick sort :-   ");
				display(n);
				break;
			case 6:
				display(n);
				break;
			default:
				printf("Invaild choice ");
				exit(0);
		}
		
		printf("\n_______________________________________________\n");
		
	}
	
}
