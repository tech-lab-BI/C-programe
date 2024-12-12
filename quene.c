#include<stdio.h>
#include<stdlib.h>
#define capacity 5

int quene[capacity];
int front=-1,rear=-1;

void enquene(int);
int dequene();
void display();
int isempty();
int isfull();

void main(){
	int ch,val;
	while(1){
		printf("\n+++++++++++++\n");
		printf("  :: MENU ::\n");
		printf(" 	1. enquene\n");
		printf("	  2. dequene\n");
		printf(" 	3. display\n");
		printf("	  4. exit\n");
		printf("Eneter choice :: ");
		scanf("%d",&ch);
		printf("\n+++++++++++++++\n");
		switch(ch){
			case 1:
				if(isfull()){
					printf("quene overflow. !!!!!!!!!!!");
				}
				else{
					printf("put your value :: ");
					scanf("%d",&val);
					enquene(val);
				}
				break;
			case 2:
				if(isempty()){
					printf("quene underflow !!!!!!!!!!!!");
				}
				else{
					printf("Deleted element :: %d",dequene());
				}
				break;
			case 3:
				if(isempty()){
					printf("quene empty !!!!!!!!!!!!!");
				}
				else{
					if(isempty()){
						printf("quene empty !!!!!!!!!!");
					}
					else{
						display();
					}
				}
				break;
			default:
				exit(0);
		}
	}
}

int isempty(){
	if(rear == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int isfull(){
	if((front == 0) && (rear == (capacity-1))){
		return 1;
	}
	else{
		return 0;
	}
}
void enquene(int x){
	int i;
	if(isempty()){
		front = rear = 0;
	}
	else if(front != 0){
		for(i=front-1;i<rear;i++){
			quene[i] = quene[i+1];
		}
		front--;
	}
	else{
		rear++;
	}
	quene[rear] = x;
}

int dequene(){
	int tem;
	tem = quene[front];
	if(isempty()){
		front = rear = -1;
	}
	else{
		front++;
	}
	return tem;
}

void display(){
	int i;
	printf("front                    rear\n");
	for(i=front;i<=rear;i++){
		printf("%d  ",quene[i]);
	}
}
