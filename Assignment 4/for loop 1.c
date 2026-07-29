#include <stdio.h>


int main()
{
    int n, i, temp, rem, sum, digit;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        temp = i;
        digit = 0;

        // Count digits
        for(; temp > 0; temp = temp / 10)
        {
            digit++;
        }

        temp = i;
        sum = 0;

        // Find Armstrong sum
        for(; temp > 0; temp = temp / 10)
        {
            rem = temp % 10;
            sum = sum + pow(rem, digit);
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}