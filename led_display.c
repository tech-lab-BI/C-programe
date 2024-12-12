#include<stdio.h>
#include<stdlib.h>
void A_F(char);

void G_L(char);

void M_R(char);// Q

void S_W(char);

void X_Z(char);

void zero_nine(char);// 2 3 4 5

int r=1,c;
void main()
{
	
	char str[50];
	int i;
	printf("Enter string :: ");
	gets(str);
	while(1){
		
		if(r == 0)
			exit(0);
		printf("Enter hight :: ");
		scanf("%d",&r);
		c = r - 2;
		for(i=0;str[i]!='\0';i++){
			if(str[i]>='A' && str[i]<='F'){
				A_F(str[i]);
			}
			else if(str[i]>='G' && str[i]<='L'){
				G_L(str[i]);
			}
			else if(str[i]>='M' && str[i]<='R'){
				M_R(str[i]);
			}
			else if(str[i]>='S' && str[i]<='W'){
				S_W(str[i]);
			}
			else if(str[i]>='X' && str[i]<='Z'){
				X_Z(str[i]);
			}
			else if(str[i]>='0' && str[i]<='9'){
				zero_nine(str[i]);
			}
			else{
				printf("-:OUT OF RANGE:-");
			}
			printf("\n--------\n");
		}
	}
}

void A_F(char ch)
{
	int i,j;
	switch(ch){
		case 'A':
			for(i=1;i<=r;i++){
				if(i == 1){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i == (r/2)+1){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
					
			}
			break;
		case 'B':
			for(i=1;i<=r;i++){
				if((i == 1)||(i == (r/2)+1)||(i == r)){
					for(j=1;j<=c-1;j++)
						printf("*");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'C':
			for(i=1;i<=r;i++){
				if((i == 1)||(i == r)){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf("*");
				}
				else if((i == 2)||(i == (r-1))){
					printf("*");
					for(j=1;j<=c-1;j++)
						printf(" ");
					printf("*");
				}
				else{
					printf("*");
					for(j=1;j<=c-1;j++)
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 'D':
			for(i=1;i<=r;i++){
				if((i == 1)||(i == r)){
					for(j=1;j<=c-1;j++){
						printf("*");
					}
					printf(" ");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'E':
			for(i=1;i<=r;i++){
				if((i == 1)||(i == r)){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else if(i == (r/2)+1){
					for(j=1;j<=c-1;j++)
						printf("*");
					printf(" ");
				}
				else{
					printf("*");
					for(j=1;j<=c-1;j++)
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 'F':
			for(i=1;i<=r;i++){
				if(i==1){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else if(i == (r/2)+1){
					for(j=1;j<=c-1;j++)
						printf("*");
					printf(" ");
				}
				else{
					printf("*");
					for(j=1;j<=c-1;j++)
						printf(" ");
				}
				printf("\n");
			}
			break;
		default:
			printf("error !");
	}
}

void G_L(char ch)
{
	int i,j;
	int n1,n2;
	switch(ch){
		case 'G':
			for(i=1;i<=r;i++){
				if((i == 1)||(i == r)){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i == (r/2)+1){
					printf("*");
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
				}
				else if(i == (r/2)){
					printf("*");
					for(j=1;j<=c-1;j++)
						printf(" ");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'H':
			for(i=1;i<=r;i++){
				if(i == (r/2)+1){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'I':
			for(i=1;i<=r;i++){
				if((i == 1)||(i == r)){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					for(j=1;j<=c;j++){
						if(j == (c/2)+1)
							printf("*");
						else
							printf(" ");
					}
				}
				printf("\n");
			}
			break;
		case 'J':
			for(i=1;i<=r;i++){
				if(i == 1){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else if(i == r){
					printf(" ");
					for(j=1;j<=c/2;j++)
						printf("*");
				}
				else if(i == r-1){
					for(j=1;j<=c;j++){
						if((j==1)||j==(c/2)+2)
							printf("*");
						else
							printf(" ");
					}
				}
				else{
					for(j=1;j<=c;j++){
						if(j == (c/2)+2)
							printf("*");
						else
							printf(" ");
					}
				}
				printf("\n");
			}
			break;
		case 'K':
			n1 = (r/2)+1;
			n2 = (r/2);
			for(i=1;i<=n1;i++){
				printf("*");
				for(j=1;j<=n1-i;j++)
					printf(" ");
				printf("*");
				printf("\n");
			}
			for(i=1;i<=n2;i++){
				printf("*");
				for(j=1;j<=i;j++)
					printf(" ");
				printf("*");
				printf("\n");
			}
			break;
		case 'L':
			for(i=1;i<=r;i++){
				if(i == r){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					printf("*");
					for(j=1;j<=c-1;j++)
						printf(" ");
				}
				printf("\n");
			}
			break;
		default:
			printf("invailde !!");
	}
}

void M_R(char ch)
{
	int i,j;
	switch(ch){
		case 'M':
			for(i=1;i<=r;i++){
				printf("*");
				if((i<=(r/2))&&(i!=1)){
					for(j=1;j<=(i-2);j++)
						printf(" ");
					printf("*");
					if(i<=(r/2)-1){
						for(j=1;j<=r-(2*i)-2;j++)
							printf(" ");
						printf("*");
					}
					for(j=1;j<=(i-2);j++)
						printf(" ");
					printf("*");
				}
				else{
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'N':
			for(i=1;i<=r;i++){
				printf("*");
				if((i==1)||(i==r)||(i==2)||(i== r-1)){
					for(j=1;j<=c-2;j++)
						printf(" ");
				}
				else{
					for(j=1;j<=i-3;j++)
						printf(" ");
					printf("*");
					for(j=1;j<=r-2-i;j++)
						printf(" ");
				}
				printf("*");
				printf("\n");
			}
			break;
		case 'O':
			for(i=1;i<=r;i++){
				if((i==1)||(i==r)){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf("*");
				}
				else{
					printf("*");
					for(j=1;j<=c-1;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'P':
			for(i=1;i<=r;i++){
				printf("*");
				if((i==1)||(i==(r/2)+1)){
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i>=(r/2)+2){
					for(j=1;j<=c-1;j++)
						printf(" ");
				}
				else{
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'Q'://incomplete
			for(i=1;i<=r;i++){
				if(i==1){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i==r){
					printf(" ");
					for(j=1;j<=c-1;j++)
						printf("*");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++){
						
					}
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'R':
			for(i=1;i<=r;i++){
				printf("*");
				if((i==1)||(i==(r/2)+1)){
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i>=(r/2)+2){
					for(j=1;j<=(i-((r/2)+1));j++)
						printf(" ");
					printf("*");
				}
				else{
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		default:
			printf("invaild input !!!!!!!");
	}
}

void S_W(char ch)
{
	int i,j;
	int y=1;
	switch(ch){
		case 'S':
			for(i=1;i<=r;i++){
				if((i==1)||(i==(r/2)+1)||(i==r)){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i==(r/2)){
					printf("*");
					for(j=1;j<=c-1;j++)
						printf(" ");
				}
				else if(i==(r/2)+2){
					for(j=1;j<=c-1;j++)
						printf(" ");
					printf("*");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'T':
			for(i=1;i<=r;i++){
				if(i==1){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					for(j=1;j<=(c/2);j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'U':
			for(i=1;i<=r;i++){
				if(i!=r){
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				else{
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				printf("\n");
			}
			break;
		case 'V':
			c = (r*2)-1;
			for(i=1;i<=r;i++){
				for(j=1;j<=i-1;j++)
					printf(" ");
				printf("*");
				for(j=1;j<=(c-(2*i));j++)
					printf(" ");
				if(i!=r)
					
					printf("*");
				printf("\n");
			}
			break;
		case 'W':
			for(i=3;i<=r;i++){
				printf("*");
				if(i<=(r/2)+1){
					for(j=1;j<=c-2;j++)
						printf(" ");
				}
				else{
					for(j=1;j<=(c-i+1);j++)
						printf(" ");
					if(i != r)
						printf("*");
					if(i>(r/2)+2){
						for(j=1;j<=y;j++)
							printf(" ");
						y+=2;
					}
					if(i > (r/2)+2 && i<r)
						printf("*");
					for(j=1;j<=(c-i+1);j++)
						printf(" ");
				}
				printf("*");
				printf("\n");
			}
			break;
		default:
			printf("Ivsilde !!!");
	}
}

void X_Z(char ch)
{
	int i,j,k,l;
	switch(ch){
		case 'X':
			k = c-2;
			l = (c/2);
			for(i=1;i<=r;i++){
				if(i==1 || i==r){
					printf("*");
					for(j=1;j<=c;j++)
						printf(" ");
					printf("*");
				}
				else if(i<=(r/2)+1){
					for(j=1;j<=(i-1);j++)
						printf(" ");
					printf("*");
					for(j=1;j<=k;j++)
						printf(" ");
					k-=2;
					if(i != (r/2)+1)
						printf("*");
				}
				else{
					for(j=1;j<=l;j++)
						printf(" ");
					l--;
					printf("*");
					if(k<1)
						k=1;
					else
						k+=2;
					for(j=1;j<=k;j++)
						printf(" ");
					printf("*");
				
				}
				printf("\n");
			}
			break;
		case 'Y':
			k = c-2;
			for(i=1;i<=r;i++){
				if(i<(r/2)){
					for(j=1;j<=(i-1);j++)
						printf(" ");
					printf("*");
					for(j=1;j<=k;j++)
						printf(" ");
					k-=2;
					if(i!=(r/2))
						printf("*");
				}
				else{
					for(j=1;j<=c/2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'Z':for(i=1;i<=r;i++){
				if((i==1)||(i==r)){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					for(j=1;j<=(r-i-1);j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		default:
			printf("invaild !!!!!!!");
	}
}

void zero_nine(char ch)
{
	int i,j,n1,n2,k;
	switch(ch){
		case '0':
			for(i=1;i<=r;i++){
				if((i==1)||(i==r)){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++){
						printf(" ");
					}
					printf("*");
				}
				printf("\n");
			}
			break;
		case '1'://incompplete
			for(i=1;i<=r;i++){
				if(i==r){
					for(j=1;j<=c;j++)
						printf("*");
					printf(" ");
				}
				else{
					if(i<=(c/2)){
						for(j=1;j<=((c/2)+1)-i;j++){
							printf(" ");
						}
						printf("*");
						if(i>1){
							for(j=1;j<=i-1;j++)
								printf(" ");
						}
							printf("*");
					}
					else{
						for(j=1;j<=(c/2)+1;j++)
							printf(" ");
						printf("*");
					}
				}
				printf("\n");
			}
			break;
		case '2':
			for(i=1;i<=r;i++){
				if(i==1){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i==2){
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				else if(i==r){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					for(j=1;j<=(r-1-i);j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case '3'://edit
			for(i=1;i<=r;i++){
				if(i==1){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else if(i==r){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i==(r-1)){
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				else if(i==(r/2)+1){
					for(j=1;j<=(c/2);j++)
						printf(" ");
					printf("*");
					printf("*");
				}
				else if(i==(r-2)){
					for(j=1;j<=c-1;j++)
						printf(" ");
					printf("*");
				}
				else{
					for(j=1;j<=(r-1-i);j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case '4'://edit
			printf(" ");
			for(i=1;i<=c;i++)
				printf("%d",i);
			printf("\n");
			n1 = (r/2)+3;
			n2 = (r/2)-2;
			k = c-3;
			for(i=1;i<=n1;i++){
				if(i==n1){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					for(j=1;j<=k;j++)
						printf("-");
					if(k!=0)
						k--;
					if(i>1)
						printf("*");
					for(j=1;j<=i-2;j++)
						printf("-");
					printf("*");
				}
				printf("\n");
			}
			for(i=1;i<=n2;i++){
				for(j=1;j<=c-3;j++)
					printf("-");
				printf("*");
				printf("\n");
			}
			break;
		case '5'://incomplete
			for(i=1;i<=r;i++){
				
				printf("\n");
			}
			break;
		case '6':
			for(i=1;i<=r;i++){
				if((i==1)||(i==r)){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i==(r/2)+1){
					for(j=1;j<=c-1;j++)
						printf("*");
				}
				else if((i>(r/2)+1)||(i==2)){
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				else{
					printf("*");
				}
				printf("\n");
			}
			break;
		case '7':
			for(i=1;i<=r;i++){
				if(i==1){
					for(j=1;j<=c;j++)
						printf("*");
				}
				else{
					for(j=1;j<=r-i;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case '8':
			for(i=1;i<=r;i++){
				if((i==1)||(i==r)||(i==(r/2)+1)){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else{
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		case '9':
			for(i=1;i<=r;i++){
				if((i==1)||(i==r)){
					printf(" ");
					for(j=1;j<=c-2;j++)
						printf("*");
					printf(" ");
				}
				else if(i==(r/2)+1){
					printf(" ");
					for(j=1;j<=c-1;j++)
						printf("*");
				}
				else if(i!=(r/2)+2){
					printf("*");
					for(j=1;j<=c-2;j++)
						printf(" ");
					printf("*");
				}
				else{
					for(j=1;j<=c-1;j++)
						printf(" ");
					printf("*");
				}
				printf("\n");
			}
			break;
		default:
			printf("invaild !!!!1");
	}
}
