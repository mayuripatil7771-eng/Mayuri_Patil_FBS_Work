#include <stdio.h>

char mystrchr(char str[], char ch)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            return &str[i];
    }

    return NULL;
}

int main()
{
    char str[100], ch;
    char *ptr;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    ptr = mystrchr(str, ch);

    if(ptr != NULL)
        printf("Character found");
    else
        printf("Character not found");

    return 0;
}