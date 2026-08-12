#include<stdio.h>

void palindrome(int *n)
{
    int temp, rev = 0, rem;

    temp = *n;

    while(*n > 0)
    {
        rem = *n % 10;
        rev = rev * 10 + rem;
        *n = *n / 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

void main()
{
    int n;

    printf("Enter 3 digit number: ");
    scanf("%d", &n);

    palindrome(&n);
}