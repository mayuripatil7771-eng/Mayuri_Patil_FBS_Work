#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char *p;

    p = strrchr(str, 'l');

    if(p != NULL)
        printf("Last occurrence: %s", p);
    else
        printf("Character not found");

    return 0;
}