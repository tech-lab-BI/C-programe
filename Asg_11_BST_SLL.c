#include<stdio.h>
#include<stdlib.h>

struct bst {
	int data;
	struct bst *left,*right;
};

struct bst *root = NULL;

struct bst *createNode(int data){
	struct bst *newNode = (struct bst *)malloc(sizeof(struct bst));
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
struct bst *insertNode(struct bst *tem,int item){
	
	if(tem == NULL){
		return createNode(item);
	}
	if(item < tem->data){
		tem->left = insertNode(tem->left,item);
	}
	else if(item > tem->data){
		tem->right = insertNode(tem->right,item);
	}
}

void preOrder(struct bst *tem){
	if(tem != NULL){
		printf(" %d ",tem->data);
		preOrder(tem->left);
		preOrder(tem->right);
	}
}
void inOrder(struct bst *tem){
	if(tem != NULL){
		inOrder(tem->left);
		printf(" %d ",tem->data);
		inOrder(tem->right);
	}
}
void postOrder(struct bst *tem){
	if(tem != NULL){
		postOrder(tem->left);
		postOrder(tem->right);
		printf(" %d ",tem->data);
	}
}

void main(){
	int ch,d;
	while(1){
		printf("\n1. Insert\t2. Pre-Order\t3. In-Order\t4.Post-Order\n");
		printf("\tChioce :: ");
		scanf("%d",&ch);
		printf("\n-------------------------------------------\n");
		switch(ch){
			case 1:
				printf("Enter data :: ");
				scanf("%d",&d);
				if(root == NULL){
					root = insertNode(root,d);
				}
				else
					insertNode(root,d);
				break;
			case 2:
				printf("\nPre Order :: ");
				preOrder(root);
				break;
			case 3:
				printf("\nIn Order :: ");
				inOrder(root);
				break;
			case 4:
				printf("\nPost Order :: ");
				postOrder(root);
				break;
			case 5:
				printf("\nDisplay :: ");
				postOrder(root);
				break;
			default:
				exit(0);
		}
		printf("\n-------------------------------------------\n");
	}
}

