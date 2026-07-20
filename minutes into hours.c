#include <stdio.h>

int main()
{
    int minutes = 130;
    int hours, remainingMinutes;

    hours = minutes / 60;
    remainingMinutes = minutes % 60;

    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d", remainingMinutes);

    return 0;
}