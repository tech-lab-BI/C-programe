#include<stdio.h>
#include<stdlib.h>
#define max 5
int front= -1,rear = -1;
char Q[max];
void enque(char);
char deque();
void display();
void main(){
	int i,ch;
	char val;
	while(1){
		printf("\n-------------------\n");
		printf(": MENU :\n");
		printf("1. enque\n2.deque\n3. display\n4. Exit\nEmter choice:");
		scanf("%d",&ch);
		printf("\n--------------------\n");
		switch(ch){
			case 1:
				if(front==0 && rear==max-1){
					printf("Quene overflow");
				}
				else{
					printf("Enter charecter :");
					scanf(" %c",&val);
					enque(val);
				}
				break;
			case 2:
				if(front==-1){
					printf("Quene underflow");
				}
				else if(front == rear){
					printf("Deleted element : %c",deque());
					front=rear=-1;
				}
				else{
					printf("Deleted element : %c",deque());
				}
				break;
			case 3:
				if(rear==-1){
					printf("Quene empty");
				}
				else{
					if(rear==-1){
						printf("Quene empty");
					}
					else
						display();
				}
				break;
			default:
				exit(0);
		}
	}
}
void enque(char x){
	int i;
	if(front==-1 && rear==-1)
		front=rear=0;
	else if(rear==max-1 && front!=0){
		for(i=front-1;i<rear;i++){
			Q[i] = Q[i+1];
		}
		front--;
	}
	else{
		rear++;
	}
	Q[rear] = x;
}
char deque(){
	char tem;
	tem = Q[front];
	front++;
	return tem;
}
void display(){
	char i;
	printf("quene : ");
	for(i=front;i<=rear;i++)
		printf(" %c  ",Q[i]);
}
