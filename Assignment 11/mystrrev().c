#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i;
}

void mystrrev(char str[])
{
    int i, j;
    char temp;

    j = mystrlen(str) - 1;

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    mystrrev(str);

    printf("Reverse = %s", str);

    return 0;
}