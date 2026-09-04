#include <stdio.h>

void alternate(int a[], int n)
{
    int i;

    printf("Alternate elements are: ");

    for(i = 0; i < n; i = i + 2)
    {
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

    alternate(a, n);

    return 0;
}