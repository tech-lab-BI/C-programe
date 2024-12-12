/*check a squre matrix upper triangle or not & lower triangle or not*/
#include<stdio.h>

int matrix[5][5];//global declaration
int r,c;

int utm(){//upper triangle matrix check
	int i,j;
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(i <= j && matrix[i][j] == 0){//upper side + diagonal
				return 0;
			}
			else if(i > j && matrix[i][j] != 0){//lower side
				return 0;
			}
		}
	}
	return 1;
}

int ltm(){//lower triangle matrix check
	int i=1,j=1;
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(i < j && matrix[i][j] != 0){//upper side
				return 0;
			}
			else if(i >= j && matrix[i][j] == 0){//lower side + diagonal
				return 0;
			}
		}
	}
	return 1;
}
void main(){
	int i,j;
	printf("Enter (row,colume) :: ");
	scanf("%d %d",&r,&c);
	printf("Enter elements :- \n");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	if(utm()){// check if matrix upper triangle or not
		printf("utm -> Yes");
	}
	else{
		printf("utm -> No");
	}
	
	if(ltm()){// check if matrix lower triangle or not
		printf("ltm -> Yes");
	}
	else{
		printf("ltm -> No");
	}
}
