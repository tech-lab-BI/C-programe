#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	int roll;
	int mark;
	int class_;
	
};

float average_mark(struct student s[],int n){
	
	int i,sum = 0;
	for(i=0;i<n;i++){
		sum += s[i].mark;
	}
	return (1.0*sum/n);
}

struct student highest_mark(struct student s[],int n){
	
	int i,j,high;
	high = s[0].mark;
	for(i=1;i<n;i++){
		if(high < s[i].mark){
			high = s[i].mark;
			j = i;
		}
	}
	return s[j];
}

struct student lowest_mark(struct student s[],int n){
	
	int i,j,low;
	low = s[0].mark;
	for(i=1;i<n;i++){
		if(low > s[i].mark){
			low = s[i].mark;
			j = i;
		}
	}
	return s[j];
}

struct student find_name(struct student s[],int n,char x){
	int i;
	for(i=0;i<n;i++){
		if(s[i].name[0] == x){
			return s[i];
		}
	}
	s[n].roll = -1 ;
	return s[n];
	
}

float pass(struct student s[],int n){
	int i,count = 0;
	for(i=0;i<n;i++){
		if(s[i].mark >= 40)
			count++;
	}
	return ((1.0*count)/n)*100;
}

int main(){
	
	int n,i;
	struct student s[100],hm,lm,R;
	float ave,p,f;
	char tem[2],x;
	
	printf("How many students :- ");
	scanf("%d",&n);
	
	printf("Enter student details :- ");
	for(i=0;i<n;i++){
		printf("\nserial no : %d\n",i+1);
		printf("Name : ");
		gets(tem);//buffer solution
		gets(s[i].name);
		printf("Roll : ");
		scanf("%d",&s[i].roll);
		printf("Mark : ");
		scanf("%d",&s[i].mark);
		printf("Class : ");
		scanf("%d",&s[i].class_);
	}
	
	int menu;
	while(1){

		printf("\n\t::MENU::\n");
		printf("\n1. Avarage mark\n2. Highest mark\n3. Lowest mark\n4. find name\n5. Pass %\n6. Fail %\n");
		printf("Enter choice :- ");
		scanf("%d",&menu);
		
		printf("\n++++++++++++++++\n");
		switch(menu){
			case 1:
				ave = average_mark(s,n);
				printf("Average mark = %.2f",ave);
				break;
			case 2:
				hm = highest_mark(s,n);
				printf("Highest mark = %d",hm.mark);
				printf("\nName : ");
				puts(hm.name);
				printf("Roll : %d \nClass : %d",hm.roll,hm.class_);
				break;
			case 3:
				lm = lowest_mark(s,n);
				printf("Lowest mark = %d",lm.mark);
				printf("\nName : ");
				puts(lm.name);
				printf("Roll : %d \nClass : %d",lm.roll,lm.class_);
				break;
			case 4:  //problem
				printf("\nEnter character for search : ");
				gets(tem);//buffer solution
				scanf("%c",&x);
				R = find_name(s,n,x);
				if(R.roll == -1){
					printf("Data not found !");
				}
				else{
					printf("Name :- ");
					puts(R.name);
					printf("Roll :- %d\nMark :- %d\nClass :- %d",R.roll,R.mark,R.class_);
				}
				break;
			case 5:
				p = pass(s,n);
				printf("Pass = %.2f%",p);
				break;
			case 6:
				f = 100 - pass(s,n);
				printf("Fail = %.2f%",f);
				break;
			default:
				exit(0);
		}
		printf("\n++++++++++++++\n");
	}
	
	return 0;
}
