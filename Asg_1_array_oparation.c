#include<stdio.h>
#include<stdlib.h>
int insertion(int[],int*);
int deletion(int[],int*);
int replace(int[],int);
int search(int[],int);
int display(int[],int);
int main(){
	int a[20],n,i;
	int ch;
	printf("How many elements you put in array : ");
	scanf("%d",&n);
	printf("Enter elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("What oparation you wnat : \n");
	printf("MENU :: \n1. Insertion\n2. Delete\n3. Replace\n4. Search\n5. Display\n6. Exit\n");
	while(1){
		printf("\nChoose opareation : ");
		scanf("%d",&ch);
		printf("\n");
		switch(ch){
			case 1:
				insertion(a,&n);
				break;
			case 2:
				deletion(a,&n);
				break;
			case 3:
				replace(a,n);
				break;
			case 4:
				search(a,n);
				break;
			case 5:
				display(a,n);
				break;
			default:
				exit(0);
		}
	}
	return 0;
}
int insertion(int a[],int *n){
	int val,pos,i;
	printf("What value you insert : ");
	scanf("%d",&val);
	printf("Enter position : ");
	scanf("%d",&pos);
	pos = pos-1;
	for(i=(*n-1);i>=pos;i--){
		a[i+1] = a[i];
	}
	a[pos] = val;
	*n = *n+1;
	return 0;
}
int deletion(int a[],int *n){
	int pos,i;
	printf("Enter position for delete : ");
	scanf("%d",&pos);
	pos = pos-1;
	for(i=pos;i<=*n-1;i++){
		a[i] = a[i+1];
	}
	*n = *n-1;
	return 0;
}
int replace(int a[],int n){
	int pos,val,i;
	printf("Enter replace value : ");
	scanf("%d",&val);
	printf("Enter it position : ");
	scanf("%d",&pos);
	pos = pos-1;
	a[pos] = val;
	return 0;
}
int search(int a[],int n){
	int val,i;
	printf("ENter value for search : ");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		if(val == a[i]){
			printf("Value index : %d",i);
			break;
		}
	}
	if(i==n){
		printf("Vlaue not in array.");
	}
	return 0;
}
int display(int a[],int n){
	int i;
	printf("Display array elements :\n");
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	return 0;
}
