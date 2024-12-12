#include<stdio.h>
int add(int*,int*);
void main(){
	int a,b;
	printf("Enter two integer values:");
	scanf("%d%d",&a,&b);
	printf("Before swap a=%d,b=%d",a,b);
	add(&a,&b);
	printf("\na=%d,b=%d",a,b);
}
int add(int *p,int *q){
	*p=*p^*q;
	*q=*p^*q;
	*p=*p^*q;
}
