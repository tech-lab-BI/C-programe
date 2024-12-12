#include<stdio.h>
#include<stdlib.h>

struct node{
	int cof;
	int exp;
	struct node *next;
};

void addNode(struct node **add,int cof,int exp){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->cof = cof;
	newNode->exp = exp;
	newNode->next = NULL;
	if(*add == NULL){
		*add = newNode;
	}
	else{
		struct node *t = *add;
		while(t->next != NULL){
			t = t->next;
		}
		t->next = newNode;
	}
}

struct node *createpoly(){
	struct node *tem = NULL;
	int i,t,c,e;
	printf("Enter no of terms :: ");
	scanf("%d",&t);
	for(i=0;i<t;i++){
		printf("Enter %d terms (cofficient) (exponential)::",(i+1));
		scanf("%d %d",&c,&e);
		addNode(&tem,c,e);
	}
	return tem;
}

void display(struct node *traverse){
	if(traverse == NULL){
		printf("NO polynomial!!");
	}
	while(traverse != NULL){
		printf("%dx^%d",traverse->cof,traverse->exp);
		traverse = traverse->next;
		if(traverse != NULL && traverse->cof > 0){
			printf("+");
		}
	}
}

struct node *addpoly(struct node *p1,struct node *p2){
	struct node *tem = NULL;
	while(p1 != NULL && p2 != NULL){
		if(p1->exp > p2->exp){
			addNode(&tem,p1->cof,p1->exp);
			p1 = p1->next;
		}
		else if(p1->exp < p2->exp){
			addNode(&tem,p2->cof,p2->exp);
			p2 = p2->next;
		}
		else{
			addNode(&tem,(p1->cof+p2->cof),p1->exp);
			p1 = p1->next;
			p2 = p2->next;
		}
	}
	while(p1 != NULL){
		addNode(&tem,p1->cof,p1->exp);
		p1 = p1->next;
	}
	while(p2 != NULL){
		addNode(&tem,p2->cof,p2->exp);
		p2 = p2->next;
	}
	return tem;
}

int main(){
	struct node *poly1,*poly2,*poly3;
	printf("Enter 1st polynomial :: \n\t");
	poly1 = createpoly();
	printf("Enter 2nd polynomial :: \n\t");
	poly2 = createpoly();
	
	poly3 = addpoly(poly1,poly2);
	
	printf("\nPolynomial 1 :: ");
	display(poly1);
	printf("\nPolynomial 2 :: ");
	display(poly2);
	printf("\nSum ::          ");
	display(poly3);
	return 0;
}
