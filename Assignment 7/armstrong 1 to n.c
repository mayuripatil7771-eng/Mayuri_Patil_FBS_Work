#include<stdio.h>

void armstrongRange(int *n)
{
    int i, temp, rem, sum;

    printf("Armstrong numbers: ");

    for(i = 1; i <= *n; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }
}

void main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    armstrongRange(&n);
}