#include <stdio.h>

void main()
{
    int a[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Alternate elements are:\n");

    for(i = 0; i < 5; i = i + 2)
    {
        printf("%d ", a[i]);
    }
}