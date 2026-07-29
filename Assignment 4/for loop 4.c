#include <stdio.h>

int main()
{
    int n, i, temp, rem, fact, j, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        for(; temp > 0; temp = temp / 10)
        {
            rem = temp % 10;
            fact = 1;

            for(j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}