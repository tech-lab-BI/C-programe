/*Q: Define a structure named "Date" with members day,
 month, and year. Write a C program to input two dates
  and find the difference in days between them.*/
  
#include<stdio.h>
#include<stdlib.h>

struct date{   //structure
	int day;
	int month;
	int year;
};

//essential function
int isleapyear(int);
int monthly_day(int);
int positive(int);//if date2 > date1
void check_validity();

struct date date1,date2;//globally declare for positive() function can access

void main(){
	
	int i, year, month, day, count=0;
	
	printf("Enter 1st date (dd/mm/yyyy) : ");
	scanf("%d %d %d",&date1.day,&date1.month,&date1.year);
	printf("Enter 2nd date (dd/mm/yyyy) : ");
	scanf("%d %d %d",&date2.day,&date2.month,&date2.year);
	
	if(date1.year != date2.year){   // count year
		year = (date1.year - date2.year);
		year = positive(year);
		for(i=1;i<=year;i++){
			if(isleapyear((date1.year > date2.year)?(date2.year + (i-1)):(date1.year + (i-1)))){
				count += 366;//in between date1 & date2 which year is small ^
			}
			else{
				count += 365;
			}
		}
	}
	
	if(date1.month != date2.month){  //count month
		month = (date1.month - date2.month);
		month = positive(month);
		for(i=1;i<=month;i++){
			count += monthly_day((date1.month > date2.month)?(date2.month + (i-1)):(date1.month + (i-1)));
			////in between date1 & date2 which month is small ^
		}
	}
	
	if(date1.day != date2.day){   //count day
		day = (date1.day - date2.day);
		day = positive(day);
		if(day > 31){
			printf("Invaild day !");
			exit(0);
		}
		count += day;
	}
		
	printf("Day = %d",count);
}

void check_validity(){
	if(date1.day > 31 || date2.day > 31){
		printf("Invaild day");//check 1-31 days
		exit(0);
	}
	if(date1.month > 12 || date2.month > 12){
		printf("Invaild month");//check 1-12 months
		exit(0);
	}
	if((date1.year < 1000 || date1.year > 9999)||(date2.year < 1000 || date2.year > 9999)){
		printf("Invaild year");// check 4-digit year
		exit(0);
	}
}

int isleapyear(int y){
	if(y > 999 && y < 10000){
		if((y % 100 == 0 && y % 400 == 0)||(y % 4 == 0)){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		printf("Invaild year !");
		exit(0);
	}
}

int monthly_day(int m){
	int day = 0;
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day += 30;
			break;
		case 2:
			day += 28;
			break;
		default:
			printf("Invalid month !");
			exit(0);
	}
	return day;
}

int positive(int a){
	if(a < 0)
		return -a;
	else
		return a;
}
