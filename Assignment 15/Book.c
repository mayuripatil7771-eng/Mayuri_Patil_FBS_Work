#include <stdio.h>

struct Book
{
    char bname[30];
    int id;
    char author[30];
    float price;
};

void accept(struct Book *b)
{
    printf("Enter Book Name: ");
    scanf("%s", b->bname);

    printf("Enter Book ID: ");
    scanf("%d", &b->id);

    printf("Enter Author Name: ");
    scanf("%s", b->author);

    printf("Enter Price: ");
    scanf("%f", &b->price);
}

void display(struct Book b)
{
    printf("\nBook Name = %s", b.bname);
    printf("\nBook ID = %d", b.id);
    printf("\nAuthor = %s", b.author);
    printf("\nPrice = %.2f", b.price);
}

void main()
{
    struct Book b;

    accept(&b);
    display(b);
}