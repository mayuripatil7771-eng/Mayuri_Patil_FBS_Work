#include<stdio.h>

void printNumbers(int *n)
{
    int i;

    for(i = 1; i <= *n; i++)
    {
        printf("%d ", i);
    }
}

void main()
{
    int n = 10;

    printNumbers(&n);
}