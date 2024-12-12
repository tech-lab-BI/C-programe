#include<stdio.h>
#include<stdlib.h>
#define max 5
int pop();
int push(int*);
int display(int*);
int a[max];
int top = -1;
void main(){
	int i,ch;
	
	printf("MENU::\n1. pop\n2. push\n3. display\n");
	while(1){
		printf("\nEnter oparation : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				top=pop();
				break;
			case 2:
				push(&top);
				break;
			case 3:
				display(&top);
				break;
			default:
				exit(0);
		}
	}
}

int pop(){
	int i;
	if(top == -1){
		printf("Underflow.");
		return -1;
	}
	else{
		printf("Delete element %d",a[top]);
		return top-1;
	}
}

int push(int *top){
	int val;
	if(*top == max-1){
		printf("Overflow.");
		return 0;
	}
	else{
		printf("Enter value : ");
		scanf("%d",&val);
		*top = *top+1;
		a[*top] = val;
	}
}

int display(int *top){
	int i;
	if(*top == -1){
		printf("Empty stack.");
		return 0;
	}
	else{
		for(i=(*top);i>=0;i--){
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
