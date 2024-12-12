#include <stdio.h>
int main(void) {
	int i,j,mat[3][3],mat2[3][3];
	int a[3],det,det1,det2,det3;
	printf("Enter x,y,z coefficient:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat[i][j]);
			mat2[i][j]=mat[i][j];
		}
	}
	printf("Enter right side value of '=':");
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
	printf("The mattrix is [A]:");
	for(i=0;i<3;i++){
		j=0;
		printf("\n");
		printf("%dx+",mat[i][j]);
		printf("%dy+",mat[i][j+1]);
		printf("%dz=",mat[i][j+2]);
		printf("%d",a[i]);
	}
	det=(mat[0][0]*((mat[1][1]*mat[2][2])-(mat[2][1]*mat[1][2])));
	det-=(mat[0][1]*((mat[1][0]*mat[2][2])-(mat[1][2]*mat[2][0])));
	det+=(mat[0][2]*((mat[1][0]*mat[2][1])-(mat[1][1]*mat[2][0])));
	printf("\ndet[A]=%d",det);
	for(i=0;i<3;i++){
		mat2[i][0]=a[i];
	det1=(mat2[0][0]*((mat2[1][1]*mat2[2][2])-(mat2[2][1]*mat2[1][2])));
	det1-=(mat2[0][1]*((mat2[1][0]*mat2[2][2])-(mat2[1][2]*mat2[2][0])));
	det1+=(mat2[0][2]*((mat2[1][0]*mat2[2][1])-(mat2[1][1]*mat2[2][0])));
	}
	for(i=0;i<3;i++)
		mat2[i][0]=mat[i][0];
	for(i=0;i<3;i++){
		mat2[i][1]=a[i];
	det2=(mat2[0][0]*((mat2[1][1]*mat2[2][2])-(mat2[2][1]*mat2[1][2])));
	det2-=(mat2[0][1]*((mat2[1][0]*mat2[2][2])-(mat2[1][2]*mat2[2][0])));
	det2+=(mat2[0][2]*((mat2[1][0]*mat2[2][1])-(mat2[1][1]*mat2[2][0])));
	}
	for(i=0;i<3;i++)
		mat2[i][1]=mat[i][1];
	for(i=0;i<3;i++){
		mat2[i][2]=a[i];
	det3=(mat2[0][0]*((mat2[1][1]*mat2[2][2])-(mat2[2][1]*mat2[1][2])));
	det3-=(mat2[0][1]*((mat2[1][0]*mat2[2][2])-(mat2[1][2]*mat2[2][0])));
	det3+=(mat2[0][2]*((mat2[1][0]*mat2[2][1])-(mat2[1][1]*mat2[2][0])));
	}
	printf("\ndet[1]=%d",det1);
	printf("\ndet[2]=%d",det2);
	printf("\ndet[3]=%d",det3);
	if(det1==0&&det2==0&&det3==0&&det==0)	printf("The equaton has infinite solution.");
	else if(det1!=0&&det==0)	printf("The equaton has no solution.");
	else{
		printf("The solution are:\n");
		printf("\nX=%d",(det1/det));
		printf("\nY=%d",(det2/det));
		printf("\nZ=%d",(det3/det));
	}
}
