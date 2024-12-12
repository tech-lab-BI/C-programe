#include<stdio.h>
#define SIZE 5

int r1,c1;
int r2,c2;

int identical(int matrix1[][],int matrix2[][]){
	int i,j;
	if(r1 == r2 && c1 == c2){
		for(i=1;i<=r1;i++){
			for(j=1;j<=c1;j++){
				if(matrix1[i][j] != matrix2[i][j])
					return 0;
			}
		}
		return 1;
	}
	else{
		return 0;
	}
}
void main(){
	int matrix1[SIZE][SIZE];
	int matrix2[SIZE][SIZE];
	int i,j;
	printf("Enter (row.colum) : ");
	scanf("%d %d",&r1,&c1);
	printf("Enter elements of matrix 1 :- \n");
	for(i=1;i<=r1;i++){
		for(j=1;j<=c1;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("Enter (row.colum) : ");
	scanf("%d %d",&r2,&c2);
	printf("Enter elements of matrix 1 :- \n");
	for(i=1;i<=r2;i++){
		for(j=1;j<=c2;j++){
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	if(identical(matrix1,matrix2)){
		printf("Identical -> Yes");
	}
	else{
		printf("Identical -> No");
	}
	
}
