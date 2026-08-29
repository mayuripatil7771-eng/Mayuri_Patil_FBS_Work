#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    memset(str, '*', 10);
    str[10] = '\0';

    printf("Result = %s", str);

    return 0;
}