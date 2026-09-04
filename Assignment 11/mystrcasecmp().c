#include <stdio.h>

int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;
    char c1, c2;

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        c1 = str1[i];
        c2 = str2[i];

        if(c1 >= 'A' && c1 <= 'Z')
            c1 = c1 + 32;

        if(c2 >= 'A' && c2 <= 'Z')
            c2 = c2 + 32;

        if(c1 != c2)
            return c1 - c2;

        i++;
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(mystrcasecmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}