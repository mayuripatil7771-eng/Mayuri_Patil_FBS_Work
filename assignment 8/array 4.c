#include <stdio.h>

void main()
{
    int a[5], i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Even numbers:\n");
    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd numbers:\n");
    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
}