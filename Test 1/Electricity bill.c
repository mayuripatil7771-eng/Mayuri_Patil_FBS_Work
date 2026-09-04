#include <stdio.h>

int main()
{
    int u, bill;

    printf("Enter units: ");
    scanf("%d", &u);

    if(u <= 50)
        bill = u * 30;
    else if(u <= 150)
        bill = 50 * 30 + (u - 50) * 40;
    else
        bill = 50 * 30 + 100 * 40 + (u - 150) * 50;

    printf("Bill = %d", bill);

    return 0;
}