#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

void store(struct Complex *c)
{
    printf("Enter Real Part: ");
    scanf("%f", &c->real);

    printf("Enter Imaginary Part: ");
    scanf("%f", &c->imaginary);
}

void display(struct Complex *c)
{
    printf("\nComplex Number = %.2f + %.2fi",
           c->real, c->imaginary);
}

void main()
{
    struct Complex c;

    store(&c);
    display(&c);
}