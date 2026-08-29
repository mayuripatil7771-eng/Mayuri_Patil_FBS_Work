#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Programming";
    char str2[20];

    strncpy(str2, str1, 5);
    str2[5] = '\0';

    printf("Copied string = %s", str2);

    return 0;
}