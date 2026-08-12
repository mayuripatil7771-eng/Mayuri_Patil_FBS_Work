#include<stdio.h>

void firstLastSum(int *n)
{
    int temp, last, first;

    temp = *n;

    last = temp % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
    printf("Sum = %d", first + last);
}

void main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    firstLastSum(&n);
}