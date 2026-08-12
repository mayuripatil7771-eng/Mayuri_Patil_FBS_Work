#include<stdio.h>

void rangeSum(int *start, int *end)
{
    int i, sum = 0;

    for(i = *start; i <= *end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}

void main()
{
    int start, end;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    rangeSum(&start, &end);
}