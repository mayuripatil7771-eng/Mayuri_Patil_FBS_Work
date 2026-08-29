#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "ABC";
    char str2[] = "ABD";

    if(memcmp(str1, str2, 3) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}