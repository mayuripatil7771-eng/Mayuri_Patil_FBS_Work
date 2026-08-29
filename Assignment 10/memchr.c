#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    char *p;

    p = memchr(str, 'l', 5);

    if(p != NULL)
        printf("Character found");
    else
        printf("Character not found");

    return 0;
}