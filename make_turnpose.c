/*make matrix tranpose*/
#include<stdio.h>
#define SIZE 5//maximum squre natrix size 5

int matrix[SIZE][SIZE];
int r,c;

void tpm(){
	int i=1,j=1;
	int tem;
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(i < j){//only change in upper side
				tem = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = tem;
			}
		}
	}
	
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

void main(){
	int i,j;
	printf("Enter (row.colum) : ");
	scanf("%d %d",&r,&c);
	printf("Enter elements :- \n");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	tpm();
}
