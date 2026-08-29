#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char *p;

    p = strpbrk(str, "aeiou");

    if(p != NULL)
        printf("First vowel: %c", *p);
    else
        printf("Vowel not found");

    return 0;
}