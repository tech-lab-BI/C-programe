#include<stdio.h>
#include<stdlib.h>

int binary(int x,int f,int l,int a[]){  //asending order
	
	int m,c1=0;
	
	while(f <= l){
		c1++;
		m = (l+f)/2;
		if(x == a[m]){
			printf("\n>>>>>>>>>>>Binary count :- %d\n",c1);
			return m;
		}
		else if(x < a[m]){
			l = m-1;
		}
		else if(x > a[m]){
			f = m+1;
		}
	}
	printf("\n>>>>>>>>>>>Binary count :- %d\n",c1);
	return -1;
}

int interpolation(int k,int l,int u,int a[]){  //asending order
	
	int c2 = 0;
	int index;
	while(l<=u){
		c2++;
		index = l + ((k - a[l])*(u - l))/(a[u] - a[l]);
		if(a[index] == k){
			printf("\n>>>>>>>>>Inter count = %d\n",c2);
			return index;
		}
		else if(k < a[index]){
			u = index - 1;
		}
		else if(k > a[index]){
			l = index +1;
		}
	}
		printf("\n>>>>>>>>>Inter count = %d\n",c2);
		return -1;
}

void main(){
	
	int a[10],n,i,val,tem,ch;
	
	printf("How many element u insert : ");
	scanf("%d",&n);
	printf("Enetr array elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("::::ARRAY ELEMENT > [");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
	printf("]\n");
	while(1){
		printf("\nEnter search value :");
		scanf("%d",&val);
		printf("\n: MENU :");
		printf("\n1. Binary\n2. Interpolation\n");
		printf("Enter search methode :");
		scanf(" %d",&ch);
		switch(ch){
			case 1:
				tem = binary(val,0,n-1,a);
				if(tem == -1){
					printf("Value not found !");
				}
				else{
					printf("Succesful search at index %d",tem);
				}
				break;
			case 2:
				tem = interpolation(val,0,n-1,a);
				if(tem == -1){
					printf("Value not found !");
				}
				else{
					printf("Succesful search at index %d",tem);
				}
				break;
			default:
				exit(0);
		}
	}
	
}
