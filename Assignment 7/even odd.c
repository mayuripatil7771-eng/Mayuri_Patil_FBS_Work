#include<stdio.h>

void evenOdd(int *n)
{
    if(*n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

void main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    evenOdd(&n);
}