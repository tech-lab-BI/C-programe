#include <stdio.h>

struct Book {
    char title[20];
    char author[20];
    float price;
};

struct Book expensive(struct Book B1, struct Book B2, struct Book B3) {
    if (B1.price > B2.price) {
        if (B1.price > B3.price)
            return B1;
        else
            return B3;
    } else {
        if (B2.price > B3.price)
            return B2;
        else
            return B3;
    }
}

struct Book cheap(struct Book B1, struct Book B2, struct Book B3) {
    if (B1.price < B2.price) {
        if (B1.price < B3.price)
            return B1;
        else
            return B3;
    } else {
        if (B2.price < B3.price)
            return B2;
        else
            return B3;
    }
}

int main() {
    struct Book b1, b2, b3;
    struct Book E,C;

    printf("Enter 1st book details:\n");
    printf("Title: ");
    fgets(b1.title, sizeof(b1.title), stdin);
    printf("Author: ");
    fgets(b1.author, sizeof(b1.author), stdin);
    printf("Price: ");
    scanf("%f", &b1.price);
    getchar(); // Clear newline character

    printf("Enter 2nd book details:\n");
    printf("Title: ");
    fgets(b2.title, sizeof(b2.title), stdin);
    printf("Author: ");
    fgets(b2.author, sizeof(b2.author), stdin);
    printf("Price: ");
    scanf("%f", &b2.price);
    getchar(); // Clear newline character

    printf("Enter 3rd book details:\n");
    printf("Title: ");
    fgets(b3.title, sizeof(b3.title), stdin);
    printf("Author: ");
    fgets(b3.author, sizeof(b3.author), stdin);
    printf("Price: ");
    scanf("%f", &b3.price);

    int menu;
    printf("		::MENU::		");
    printf("\n1. Expensive Book\n2. Cheap Book\n3. ");
    printf("Enter choice :- ");
    scanf("%d",&menu);
	
	switch(menu){
		case 1:
			E = expensive(b1, b2, b3);
			printf("\nExpensive book details:\n");
		    printf("Title: ");
		    puts(E.title);
		    printf("Author: ");
		    puts(E.author);
		    printf("Price: %.2f\n", E.price);
		    break;
		case 2:
			C = cheap(b1, b2, b3);
			printf("\nCheap book details:\n");
		    printf("Title: ");
		    puts(C.title);
		    printf("Author: ");
		    puts(C.author);
		    printf("Price: %.2f\n", C.price);
		    break;
		default:
			printf("\nThank you \n\t\tvisit again.");
	}
	
	
	
	
    

    

    return 0;
}

