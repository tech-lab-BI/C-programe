/*Q: Define a structure named Time with members 
hours, minutes, and seconds.
 Write a C program to input two times, add them, 
 and display the result in proper time format.*/
 
#include<stdio.h>
struct time{
	int hour;
	int minute;
	int second;
};
void main(){
	struct time time1,time2,result;
	
	printf("Enter 1st time(hour , minute , second) :: ");
	scanf("%d %d %d",&time1.hour,&time1.minute,&time1.second);
	printf("Enter 2nd time(hour , minute , second) :: ");
	scanf("%d %d %d",&time2.hour,&time2.minute,&time2.second);
	
	result.second = (time1.second + time2.second);
	result.minute = (time1.minute + time2.minute);
	result.hour = (time1.hour + time2.hour);
	
	if(result.second >= 60){
		result.minute += (result.second - (result.second % 60)) / 60;
		result.second = (result.second % 60);
	}
	if(result.minute >= 60){
		result.hour += (result.minute - (result.minute % 60)) / 60;
		result.minute = (result.minute % 60);
	}
	
	printf("Output = %dH:%dM:%dS",result.hour,result.minute,result.second);
}
