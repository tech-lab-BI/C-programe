#include<stdio.h>
void main(){
	int a[3][2],b[2][3],d[3][3],i,j,r,c,k;
	printf("Enter row & colum number:");
	scanf("%d%d",&r,&c);
	printf("Enter %dx%d matrix element:\n",r,c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<r;i++){//tranpose
		for(j=0;j<c;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("Tranpose matrix:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			d[i][j]=0;//common
			for(k=0;k<c;k++){
				d[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("The multiply matrix :\n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
}
