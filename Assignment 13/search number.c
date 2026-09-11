#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, num, found = 0;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
        return 1;

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Number not found\n");

    free(arr);

    return 0;
}