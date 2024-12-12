/*Q: Create a structure named Book to store book details like
 title, author, and price. Write a C program to input 
 details for three books, find the most expensive 
 and the lowest priced books, and display their information.*/
 
#include<stdio.h>
struct book{
	char title[20];
	char author[20];
	float price;
};
void main(){
	struct book book1,book2,book3;
	
	printf("Enter book-1 details :\n");//take details for book 1
	printf("Titile :- ");
	scanf("%s",&book1.title);//must not contain space
	printf("Auther :- ");
	scanf("%s",&book1.author);//must not contain space
	printf("Price :- ");
	scanf("%f",&book1.price);
	printf("---------------\n");
	
	printf("Enter book-2 details :\n");//take details for book 2
	printf("Titile :- ");
	scanf("%s",&book2.title);//must not contain space
	printf("Auther :- ");
	scanf("%s",&book2.author);//must not contain space
	printf("Price :- ");
	scanf("%f",&book2.price);
	printf("---------------\n");
	
	printf("Enter book-3 details :\n");//take details for book3
	printf("Titile :- ");
	scanf("%s",&book3.title);//must not contain space
	printf("Auther :- ");
	scanf("%s",&book3.author);//must not contain space
	printf("Price :- ");
	scanf("%f",&book3.price);
	printf("---------------\n");
	
	/*int max;
	//(book1.price > book2.price)?((book1.price > book3.price)?(book1.price):(book3.price)):((book2.price > book3.price)?(book2.price):(book3.price));
	int min;
	if(book1.price > book2.price){
		if(book1.price > book3.price){
			max = 1;
			min = (book2.price < book3.price)?2:3;
		}
		else{
			max = 3;
			min = 2;
		}
	}
	else{
		if(book2.price > book3.price){
			max = 2;
			min = (book1.price < book3.price)?1:3;
		}
		else{
			max = 3;
			min = 1;
		}
	}*/
	
	struct book high,low;
	
	//finding highest price
	if(book1.price > book2.price && book1.price > book3.price)
		high = book1;
	else if(book2.price > book1.price && book2.price > book3.price)
		high = book2;
	else
		high = book3;
		
	//finding lowset price
	if(book1.price < book2.price && book1.price < book3.price)
		low = book1;
	else if(book2.price < book1.price && book2.price < book3.price)
		low = book2;
	else
		low = book3;
	
	printf("$ Expencive book :-\n");
	printf("Title :- %s\n",high.title);
	printf("Author :- %s\n",high.author);
	printf("Price :- %.2f\n",high.price);
	
	printf("$ Lowest price book :-\n");
	printf("Title :- %s\n",low.title);
	printf("Author :- %s\n",low.author);
	printf("Price :- %.2f\n",low.price);	
}
