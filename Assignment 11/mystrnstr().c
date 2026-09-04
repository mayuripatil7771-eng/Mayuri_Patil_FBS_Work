#include <stdio.h>

char *mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    for(i = 0; str[i] != '\0' && i < n; i++)
    {
        j = 0;

        while(sub[j] != '\0' &&
              str[i + j] != '\0' &&
              i + j < n &&
              str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

int main()
{
    char str[100], sub[100];
    char *ptr;
    int n;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    printf("Enter n: ");
    scanf("%d", &n);

    ptr = mystrnstr(str, sub, n);

    if(ptr != NULL)
        printf("Substring found");
    else
        printf("Substring not found");

    return 0;
}