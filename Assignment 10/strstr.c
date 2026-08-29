#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char *p;

    p = strstr(str, "World");

    if(p != NULL)
        printf("Substring found: %s", p);
    else
        printf("Substring not found");

    return 0;
}