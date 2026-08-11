#include <stdio.h>

int main()
{
    int arr[5], brr[5], crr[10];
    int i, j;

    printf("Enter first array elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }

    for(i = 0, j = 5; i < 5; i++, j++)
    {
        crr[j] = brr[i];
    }

    printf("Merged array:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }
}