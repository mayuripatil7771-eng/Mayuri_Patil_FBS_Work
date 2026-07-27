#include <stdio.h>

int main()
{
    int n, temp, r, sum = 0;
    int i, fact;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        r = n % 10;

        fact = 1;
        i = 1;

        while(i <= r)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}
