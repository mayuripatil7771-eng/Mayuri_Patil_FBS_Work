#include<stdio.h>

void strong(int *n)
{
    int temp, rem, i, fact, sum = 0;

    temp = *n;

    while(temp > 0)
    {
        rem = temp % 10;

        fact = 1;

        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == *n)
        printf("Strong");
    else
        printf("Not Strong");
}

void main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    strong(&n);
}