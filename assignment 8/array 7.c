#include <stdio.h>

void main()
{
    int arr[5], brr[5], crr[5], i;

    printf("Enter elements of first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array is:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }
}