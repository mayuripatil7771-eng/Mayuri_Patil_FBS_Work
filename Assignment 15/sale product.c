#include <stdio.h>

struct Product
{
    char name[30];
    float price;
    int quantity;
};

void accept(struct Product p[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Product %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", p[i].name);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);
    }
}

void display(struct Product p[], int n)
{
    int i;
    float total = 0;

    printf("\n----- BILL -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nProduct = %s", p[i].name);
        printf("\nPrice = %.2f", p[i].price);
        printf("\nQuantity = %d", p[i].quantity);
        printf("\nAmount = %.2f\n",
               p[i].price * p[i].quantity);

        total = total + (p[i].price * p[i].quantity);
    }

    printf("\nTotal Cost = %.2f", total);
}

void main()
{
    struct Product p[20];
    int n;

    printf("Enter number of products: ");
    scanf("%d", &n);

    accept(p, n);
    display(p, n);
}