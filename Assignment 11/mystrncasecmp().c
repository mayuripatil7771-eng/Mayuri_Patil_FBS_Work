#include <stdio.h>

int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;
    char c1, c2;

    for(i = 0; i < n; i++)
    {
        c1 = str1[i];
        c2 = str2[i];

        if(c1 >= 'A' && c1 <= 'Z')
            c1 = c1 + 32;

        if(c2 >= 'A' && c2 <= 'Z')
            c2 = c2 + 32;

        if(c1 != c2)
            return c1 - c2;

        if(c1 == '\0' || c2 == '\0')
            break;
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];
    int n;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter n: ");
    scanf("%d", &n);

    if(mystrncasecmp(str1, str2, n) == 0)
        printf("First %d characters are equal", n);
    else
        printf("First %d characters are not equal", n);

    return 0;
}