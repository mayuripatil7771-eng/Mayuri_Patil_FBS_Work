#include <stdio.h>

char *mystrstr(char str[], char sub[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
            j++;

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

int main()
{
    char str[100], sub[100];
    char *ptr;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    ptr = mystrstr(str, sub);

    if(ptr != NULL)
        printf("Substring found");
    else
        printf("Substring not found");

    return 0;
}