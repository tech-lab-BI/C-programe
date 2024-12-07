#include<stdio.h>
void main(){
	char str[50],len,i,flag=0;
	puts("Enter a statement:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
		len++;
	for(i=0;i<len;i++){
		if(str[i]!=str[len-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("This '%s' statement is not palindrome.",str);
	else
		printf("This '%s' statement is palindrome.",str);
}
