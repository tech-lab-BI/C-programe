#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head;
int n=0;

void push(int item){//insert at beg
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	if (newnode == NULL)
	{
		printf("\nMemory Is Full");
		return;
	}
	newnode->data = item;
	newnode->next = NULL;
	struct node *t = head;
	
	if (head == NULL){
		head = newnode;
		return;
	}
	else{
		newnode->next = head;
		head = newnode;
	}
	n++;
}

void pop(){//delete at beg

	struct node *t = head;
	int i = 0;
	if (head == NULL){
		printf("\nStack under flow.");
		return;
	}
	else{
		head = head->next;
		return;
	}
	n--;
	printf("Item Deleted...........");
}

void traversal(){
	
	if (head == NULL)
	{
		printf("\nEmpty Stack.");
		return;
	}
	else
	{
		struct node *traverse = head;
		printf("\nStack :: ");
		while (traverse != NULL)
		{
			printf("%d", traverse->data);
			traverse = traverse->next;
		}
		printf("NULL");
	}
}

int main(){
	
	int d,ch;
	
	while(1){
		printf("\n1. Push \n2. Pop \n3. Display");
		printf("\n  Choice :: ");
		scanf("%d", &ch);
		printf("\n----------------------------------------\n");
		switch(ch){
			case 1:
				printf("Enter data :: ");
				scanf("%d",&d);
				push(d);
				break;
			case 2:
				pop();
				break;
			case 3:
				traversal();
				break;
			default:
				exit(0);	
		}
		printf("\n----------------------------------------\n");
	}
	return 0;
}
