#include <stdio.h>

int main()
{
    int n, i = 2, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(i < n)
    {
        if(n % i == 0)
            count++;

        i++;
    }

    if(count == 0 && n > 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}