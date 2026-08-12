#include<stdio.h>

void voting(int *age)
{
    if(*age >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
}

void main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    voting(&age);
}