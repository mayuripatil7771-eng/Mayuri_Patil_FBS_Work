#include<stdio.h>

void primeRange(int *n)
{
    int i, j, count;

    printf("Prime numbers: ");

    for(i = 1; i <= *n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }
}

void main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    primeRange(&n);
}