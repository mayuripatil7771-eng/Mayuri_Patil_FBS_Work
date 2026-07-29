#include <stdio.h>

int main()
{
    int no, choice;
    int i, count = 0;
    int temp, rem, rev = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    printf("\n. Even or Odd");
    printf("\n. Prime or Not");
    printf("\n. Palindrome or Not");
    printf("\n. Positive, Negative or Zero");
    printf("\n. Reverse a Number");
    printf("\n. Sum of Digits");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        if(no % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if(choice == 2)
    {
        for(i = 1; i <= no; i++)
        {
            if(no % i == 0)
                count++;
        }

        if(count == 2)
            printf("Prime Number");
        else
            printf("Not Prime Number");
    }

    else if(choice == 3)
    {
        temp = no;

        for(; temp > 0; temp = temp / 10)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
        }

        if(rev == no)
            printf("Palindrome Number");
        else
            printf("Not Palindrome Number");
    }

    else if(choice == 4)
    {
        if(no > 0)
            printf("Positive Number");
        else if(no < 0)
            printf("Negative Number");
        else
            printf("Zero");
    }

    else if(choice == 5)
    {
        temp = no;

        for(; temp > 0; temp = temp / 10)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
        }

        printf("Reverse = %d", rev);
    }

    else if(choice == 6)
    {
        temp = no;

        for(; temp > 0; temp = temp / 10)
        {
            rem = temp % 10;
            sum = sum + rem;
        }

        printf("Sum of Digits = %d", sum);
    }

    else
    {
        printf("Invalid Choice");
    }

    return 0;
}