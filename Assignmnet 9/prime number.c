#include <stdio.h>

int isprime(int num)
{
    int i;

    if(num < 2)
        return 0;

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

void prime(int a[], int n)
{
    int i;

    printf("Prime numbers are: ");

    for(i = 0; i < n; i++)
    {
        if(isprime(a[i]))
            printf("%d ", a[i]);
    }
}

int main()
{
    int a[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    prime(a, n);

    return 0;
}