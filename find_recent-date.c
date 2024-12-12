#include<stdio.h>
struct Date{
	int d;
	int m;
	int y;
};
struct Date recent(struct Date d1,struct Date d2){
	if(d1.y > d2.y)
		return d1;
	else if(d1.y < d2.y)
		return d2;
	else if(d1.m > d2.m)
		return d1;
	else if(d1.m < d2.m)
		return d2;
	else if(d1.d > d2.d)
		return d1;
	else if(d1.d < d2.d)
		return d2;
}
void main(){
	
	struct Date date1,date2,r;
	
	printf("Enter 1st date(DD/MM/YYYY) :- ");
	scanf("%d %d %d",&date1.d,&date1.m,&date1.y);
	printf("Enter 2nd date(DD/MM/YYYY) :- ");
	scanf("%d %d %d",&date2.d,&date2.m,&date2.y);
	
	r = recent(date1,date2);
	
	//	printf("Both are recent.")
	printf("Recent date = %d-%d-%d",r.d,r.m,r.y);
		
}
