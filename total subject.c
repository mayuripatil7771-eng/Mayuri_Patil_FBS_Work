#include <stdio.h>

int main()
{
    int sub1 = 80, sub2 = 75, sub3 = 90, sub4 = 85, sub5 = 70;
    int total;
    float percentage;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}