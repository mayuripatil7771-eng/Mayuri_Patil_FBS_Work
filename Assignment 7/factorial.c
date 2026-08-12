#include<stdio.h>

void factorial(int *n)
{
    int i, fact = 1;

    for(i = 1; i <= *n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

void main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    factorial(&n);
}