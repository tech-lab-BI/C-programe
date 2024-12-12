#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *tem = NULL;
int n = 0;

void create(int data){
	
	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	if (head == NULL)
	{
		head = newnode;
		tem = newnode;
		return;
	}
	else
	{
		tem->next = newnode;
	}
	tem = newnode;
}

void insert_at_beg(int item){
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

void insert_at_pos(int item,int pos){
	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	if (newnode == NULL)
	{
		printf("\nMemory Is Full");
		return;
	}
	newnode->data = item;
	newnode->next = NULL;
	struct node *t = head;
	int i = 0;

	t = head;
	for (i = 1; i < pos - 1; i++){
		t = t->next;
	}
	newnode->next = t->next;
	t->next = newnode;
	
	n++;
}

void insert_at_end(int data){
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	if (newnode == NULL)
	{
		printf("\nMemory Is Full");
		return;
	}
	newnode->data = data;
	newnode->next = NULL;
	struct node *t = head;
	
	while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = newnode;
	
	n++;
}

void delete_at_beg(){
	struct node *t = head;
	int i = 0;
	if (head == NULL){
		printf("\nEmpty node");
		return;
	}
	else{
		head = head->next;
		return;
	}
	n--;
}

void delete_at_pos(int pos){
	struct node *t = head;
	int i = 0;
	struct node *r = head;
	
	t = head;
	for (i = 1; i < pos - 1 && t != NULL; i++)
	{
		t = t->next;
	}
	r = t->next;
	t->next = t->next->next;
	free(r);
	n--;
}

void delete_at_end(){
	
	struct node *t = head;
	int i = 0;
	
	t = head;
	while (t->next->next != NULL){
		t = t->next;
	}
	t->next = NULL;
	n--;
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
		printf("\nHead -> ");
		while (traverse != NULL)
		{
			printf("%d -> ", traverse->data);
			traverse = traverse->next;
		}
		printf("End");
	}
}

int main(){
	
	int i = 0, d,p,ch;
	printf("\nEnter The No. Of Elements(Initially): ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter Data: ");
		scanf("%d", &d);
		create(d);
	}
	
	while(1){
		printf("\n1. Insert At Beginning \n2. Insert At Position \n3. Insert At End ");
		printf("\n4. Delete At Beginning \n5. Delete At Position \n6. Delete At End ");
		printf("\n7. Display ");
		printf("\n  Choice :: ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("\n Enter data :: ");
				scanf("%d",&d);
				insert_at_beg(d);
				break;
			case 2:
				printf("\n Enter data :: ");
				scanf("%d",&d);
				printf("\n Enter position ::");
				scanf("%d",&p);
				insert_at_pos(d,p);
				break;
			case 3:
				printf("\n Enter data :: ");
				scanf("%d",&d);
				insert_at_end(d);
				break;
			case 4:
				delete_at_beg();
				break;
			case 5:
				printf("\n Enter position :: ");
				scanf("%d",&p);
				delete_at_pos(p);
				break;
			case 6:
				delete_at_end();
				break;
			case 7:
				printf("Display :: \n");
				traversal();
				break;
			default:
				exit(0);
				
		}
	}
	return 0;
}
