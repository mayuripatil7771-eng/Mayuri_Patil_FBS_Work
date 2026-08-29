#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";

    memmove(str + 2, str, 3);

    printf("Result = %s", str);

    return 0;
}