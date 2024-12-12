#include<stdio.h>
int main(){
	int P,C,M,total,percentage;
	char grade;
	printf("Enter your PCM marks :");
	scanf("%d %d %d",&P,&C,&M);
	total = P+C+M;
	percentage = total / 3 ;
	if(percentage >= 90)
			grade = "O";
	else if(percentage >= 80)
			grade = "E";
	else if(percentage >= 70)
			grade = "A";
	else if(percentage >= 60)
			grade = "B";
	else if(percentage >= 50)
			grade = "C";
	else if(percentage >= 40)
			grade = "D";
	else 
			grade = "FAIL";
	printf("Your Grade =  , Percentage = %d",percentage);
}
