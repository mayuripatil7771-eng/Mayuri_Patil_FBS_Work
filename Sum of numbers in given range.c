#include <stdio.h>

int main()
{
    int start, end, sum = 0;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    while(start <= end)
    {
        sum = sum + start;
        start++;
    }

    printf("Sum = %d", sum);

    return 0;
}