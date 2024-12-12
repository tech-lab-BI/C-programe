#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char infix[50],postfix[50];
char stack[50];
int top = -1;

void push(char);
char pop();
int priority(char);

void main(){
	
	printf("infix operation :");
	gets(infix);
	
	int i=0,j=0;
	char ch;
	char s;
	while(infix[i] != '\0'){
		ch = infix[i];
		if(ch == '('){
			push(ch);
		}
		if(ch == ')'){
			postfix[j++] = pop();
			pop();
		}
		if(isalnum(ch)){
		//	printf("%c ",ch);
			postfix[j++] = ch;
		}
		if(ch == '+'||ch=='-'||ch=='*'||ch=='/'){
			if(priority(ch) <= priority(stack[top])){
				postfix[j++] = pop();
				push(ch);			
			}
			else{
				push(ch);
			}
		}
		i++;
	}
	if(stack[top] != '\0'){
		while(stack[top]){
			postfix[j++] = pop();
		}
	}
	postfix[j] = '\0';
	if(postfix[j-1] == '('){
		printf("() mismatch");
		exit(0);
	}
		
	
	printf("\nPostfix :: ");
	puts(postfix);
}

void push(char x){
	top++;
	stack[top] = x;
	//printf("%c",stack[top]);
}

char pop(){
	char tem = stack[top];
	top--;
	return tem;
}

int priority(char x){
	if(x == '+' || x == '-')
		return 1;
	if(x == '*' || x == '/')
		return 2;
	return 0;
}

