#include <stdio.h>

void add(int a[], int b[], int c[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
}

int main()
{
    int a[100], b[100], c[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    add(a, b, c, n);

    printf("Third array is:\n");
    for(i = 0; i < n; i++)
        printf("%d ", c[i]);

    return 0;
}