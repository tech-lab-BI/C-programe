#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;
int n = 0;

void enque(int item){//insert at beg
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

void delque(){//delete at end
	
	if(head == NULL){
		printf("Stack under flow");
	}
	else{
		
		struct node *t = head;
		int i = 0;
		
		t = head;
		while (t->next->next != NULL){
			t = t->next;
		}
		t->next = NULL;
		n--;
		printf("Item Deleted...........");
	}
}

void traversal(){
	
	if (head == NULL)
	{
		printf("\nEmpty Linkedlist");
		return;
	}
	else
	{
		struct node *traverse = head;
		printf("\nQuene :: ");
		while (traverse != NULL)
		{
			printf("%d -> ", traverse->data);
			traverse = traverse->next;
		}
		printf("Null");
	}
}

int main(){
	
	int d,ch;
	while(1){
		printf("\n1. Push \n2. Pop \n3. Display ");
		printf("\n  Choice :: ");
		scanf("%d", &ch);
		printf("\n------------------------------------\n");
		switch(ch){
			case 1:
				printf("\n Enter data :: ");
				scanf("%d",&d);
				enque(d);
				break;
			case 2:
				delque();
				break;
			case 3:
				printf("Display :: \n");
				traversal();
				break;
			default:
				exit(0);		
		}
		printf("\n------------------------------------\n");
	}
	return 0;
}
