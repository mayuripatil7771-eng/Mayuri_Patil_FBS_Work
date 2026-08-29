#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "12345ABC";

    printf("Length = %lu", strspn(str, "1234567890"));

    return 0;
}