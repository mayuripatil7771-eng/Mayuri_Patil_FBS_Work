#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[20];

    memcpy(str2, str1, strlen(str1) + 1);

    printf("Copied string = %s", str2);

    return 0;
}