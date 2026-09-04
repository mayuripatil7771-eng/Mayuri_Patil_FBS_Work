#include <stdio.h>

char mystrrchr(char str[], char ch)
{
    int i;
    char *last = NULL;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            last = &str[i];
    }

    return last;
}

int main()
{
    char str[100], ch;
    char *ptr;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    ptr = mystrrchr(str, ch);

    if(ptr != NULL)
        printf("Last occurrence found");
    else
        printf("Character not found");

    return 0;
}