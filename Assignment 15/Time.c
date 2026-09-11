#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

void accept(struct Time *t)
{
    printf("Enter Hours: ");
    scanf("%d", &t->hrs);

    printf("Enter Minutes: ");
    scanf("%d", &t->min);

    printf("Enter Seconds: ");
    scanf("%d", &t->sec);
}

void display(struct Time t)
{
    printf("%d:%d:%d", t.hrs, t.min, t.sec);
}

struct Time addTime(struct Time t1, struct Time t2)
{
    struct Time t;

    t.sec = t1.sec + t2.sec;
    t.min = t1.min + t2.min;
    t.hrs = t1.hrs + t2.hrs;

    if (t.sec >= 60)
    {
        t.sec = t.sec - 60;
        t.min++;
    }

    if (t.min >= 60)
    {
        t.min = t.min - 60;
        t.hrs++;
    }

    return t;
}

int convertToSec(struct Time t)
{
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}

void main()
{
    struct Time t1, t2, result;
    int seconds;

    printf("Enter first time:\n");
    accept(&t1);

    printf("\nEnter second time:\n");
    accept(&t2);

    result = addTime(t1, t2);

    printf("\nFirst Time = ");
    display(t1);

    printf("\nSecond Time = ");
    display(t2);

    printf("\nAddition = ");
    display(result);

    seconds = convertToSec(result);

    printf("\nTotal Seconds = %d", seconds);
}