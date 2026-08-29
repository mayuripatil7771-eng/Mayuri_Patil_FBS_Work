#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char *p;

    p = strchr(str, 'W');

    if(p != NULL)
        printf("Character found: %s", p);
    else
        printf("Character not found");

    return 0;
}