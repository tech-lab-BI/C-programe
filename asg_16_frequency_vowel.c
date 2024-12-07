#include<stdio.h>
void main(){
	char string[50],n=0,j,b=0,a=0,e=0,i=0,o=0,u=0;
	puts("Enter a statement: ");
	gets(string);
	for(j=0;string[j]!='\0';j++){
		switch(string[j]){
			case'a':
			case'A':a++;break;
			case'e':
			case'E':e++;break;
			case'i':
			case'I':i++;break;
			case'o':
			case'O':o++;break;
			case'u':
			case'U':u++;break;
			case' ':b++;
			default:n++;
		}
	}
	printf("\nTotal vowel(a,e,i,o,u): %d\na=%d,e=%d,i=%d,o=%d,u=%d",a+e+i+o+u,a,e,i,o,u);
	printf("\nTotal consonent: %d",n);
}
