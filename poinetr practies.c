#include<stdio.h>
void main(){
	char arr[]="Welcome to the world of c programming";
	char *add;
	printf("%s",arr);
	add=arr;
	printf("\n%s",add);
	printf("\n%u\t%u",&arr,&add);
}
