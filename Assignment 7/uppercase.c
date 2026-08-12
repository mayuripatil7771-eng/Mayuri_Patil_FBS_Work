#include<stdio.h>

void upperLower(char *ch)
{
    if(*ch >= 'A' && *ch <= 'Z')
        printf("Uppercase");
    else if(*ch >= 'a' && *ch <= 'z')
        printf("Lowercase");
    else
        printf("Not an alphabet");
}

void main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);

    upperLower(&ch);
}