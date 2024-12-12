#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Complex{
	int r;
	int i;
};

struct Complex add(struct Complex a,struct Complex b){
	
	struct Complex r;
	r.r = a.r + b.r;
	r.i = a.i + b.i;
	return r;
	
}

struct Complex sub(struct Complex a,struct Complex b){
	
	struct Complex r;
	r.r = a.r - b.r;
	r.i = a.i - b.i;
	return r;
	
}

struct Complex mul(struct Complex a,struct Complex b){	
	
	struct Complex r;
	r.r = a.r * b.r;
	r.i = a.i * b.i;
	return r;
	
}

struct Complex divi(struct Complex a,struct Complex b){
	
	struct Complex r;
	r.r = ((a.r*b.r) + (a.i*b.i)) / (pow(b.r,2) + pow(b.i,2));
	r.i = ((a.i*b.r) - (a.r*b.i)) / (pow(b.r,2) + pow(b.i,2));
	return r;
	
}

struct Complex square_root(struct Complex a){
	
	a.r = pow(((a.r + pow((a.r*a.r + a.i*a.i),0.5))/2),0.5);
	if(a.i > 0)
		a.i = pow(((pow((a.r*a.r + a.i*a.i),0.5) - a.r)/2),0.5);
	else
		a.i = -pow(((pow((a.r*a.r + a.i*a.i),0.5) - a.r)/2),0.5);
	return a;
	
}

void display(struct Complex a){
	
	//printf("\n");
	if(a.i < 0){
		printf("(%d%di)",a.r,a.i);
	}
	else{
		printf("(%d+%di)",a.r,a.i);
	}
	//printf("\n");	
	
}

int main(){
	
	struct Complex c1,c2,r;
	int ch;
	
	printf("Enter 1st complex number :-\n");
	printf("Real part = ");
	scanf("%d",&c1.r);
	printf("Imaginary part = ");
	scanf("%d",&c1.i);
	
	printf("Enter 2nd complex number :-\n");
	printf("Real part = ");
	scanf("%d",&c2.r);
	printf("Imaginary part = ");
	scanf("%d",&c2.i);
	
	while(1){
		
		printf("\n\t<: MENU :>");
		printf("\n1. addition\n2. subtraction\n3. multiplication\n4. Divition\n5.Square root\n");
		printf("Enter choice :: ");
		scanf("%d",&ch);
		printf("+++++++++++++++++\n");
		
		switch(ch){
			case 1:            // addition
				r = add(c1,c2);
				display(c1);
				printf(" + ");
				display(c2);
				printf(" = ");
				display(r);
				break;
			case 2:            //subtraction
				r = sub(c1,c2);
				display(c1);
				printf(" - ");
				display(c2);
				printf(" = ");
				display(r);
				break;
			case 3:            //multiplication
				r = mul(c1,c2);
				display(c1);
				printf(" * ");
				display(c2);
				printf(" = ");
				display(r);
				break;
			case 4:            //divition
				r = divi(c1,c2);
				display(c1);
				printf(" / ");
				display(c2);
				printf(" = ");
				display(r);
				break;
			case 5:                //square root
				r = square_root(c1);
				printf("<i>  ");
				display(c1);
				printf(" = ");
				display(r);
				r = square_root(c2);
				printf("\n<ii>  ");
				display(c2);
				printf(" = ");
				display(r);
				break;
			default:
				exit(0);
		}
		printf("\n+++++++++++++++++");
	}
	
	return 0;
}
