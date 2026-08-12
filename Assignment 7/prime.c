#include<stdio.h>

void prime(int *n)
{
    int i, count = 0;

    for(i = 1; i <= *n; i++)
    {
        if(*n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}

void main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    prime(&n);
}