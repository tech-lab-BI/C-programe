#include<stdio.h>
int fact(int f);
int main(){
	int i,n;
	float sum=0;//taking sum as a float data type 
	printf("Enter the n no to how much you want to print: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=((i*11.0)/fact(i));//int / int=int so,float / int=float,for 11.0
		if(i<n)	printf("[(%d*11)/%d!]+",i,i);//just check out
		else	printf("[(%d*11)/%d!]",i,i);//for remove last +
	}
	printf("\n%f",sum);
	return 0;
}
int fact(int f){
	int a=1,j;
	for(j=1;j<=f;j++)
		a*=j;
	return a;
}
/*Previous code:-
#include<stdio.h>
#include<math.h>

int fact(int f);

int main(){
int f,i,n,sum=0;

printf("Enter the n no to how much you want to print: \n");
scanf("%d",&n);


for(i=0;i<=n;i++){
sum+=(i*11)/i;
}
return 0;
}

int fact(int f){
for(i*i-1
}*/
