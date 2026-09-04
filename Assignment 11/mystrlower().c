#include <stdio.h>

void mystrlower(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    mystrlower(str);

    printf("Lowercase = %s", str);

    return 0;
}