#include <stdio.h>

int sum(int a[], int n)
{
    int i, s = 0;

    for(i = 0; i < n; i++)
    {
        s = s + a[i];
    }

    return s;
}

int main()
{
    int a[100], n, i, result;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    result = sum(a, n);

    printf("Sum = %d", result);

    return 0;
}