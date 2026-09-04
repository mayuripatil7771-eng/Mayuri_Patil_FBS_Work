#include <stdio.h>

void oddeven(int a[], int n)
{
    int i;

    printf("Even numbers: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    printf("\nOdd numbers: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
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

    oddeven(a, n);

    return 0;
}