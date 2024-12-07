#include<stdio.h>
#include<malloc.h>
#pragma pack(1)
typedef struct student{
	char name[50];
	int roll,marks;
}stud;
void main(){
	int i,n,max;
	stud *ptr;
	printf("Enter number of students:");
	scanf("%d",&n);
	ptr=(stud*)malloc(sizeof(stud)*n);
	for(i=0;i<n;i++){
		printf("Enter name,roll and marks for stud%d:\n",i);
		fflush(stdin);
		scanf("%s%d%d",(ptr+i)->name,&(ptr+i)->roll,&(ptr+i)->marks);
	}
	for(i=0;i<n;i++){
		printf("\nDisplay name=%s,Roll=%d,Marks=%d",(ptr+i)->name,(ptr+i)->roll,(ptr+i)->marks);
	}
	max=(ptr+0)->marks;
	for(i=0;i<n;i++){
		if((ptr+i)->marks>max)
			max=(ptr+i)->marks;
	}
	for(i=0;i<n;i++){
		if((ptr+i)->marks==max)
			printf("\nName of student recievd marks:%s",(ptr+i)->name);
	}
}
