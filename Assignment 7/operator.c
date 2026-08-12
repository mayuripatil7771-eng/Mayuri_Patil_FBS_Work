#include<stdio.h>

void calculator(float *a, float *b, char *op)
{
    switch(*op)
    {
        case '+':
            printf("Addition = %.2f", *a + *b);
            break;

        case '-':
            printf("Subtraction = %.2f", *a - *b);
            break;

        case '*':
            printf("Multiplication = %.2f", *a * *b);
            break;

        case '/':
            if(*b != 0)
                printf("Division = %.2f", *a / *b);
            else
                printf("Cannot divide by zero");
            break;

        case '%':
            printf("Modulus = %d", (int)*a % (int)*b);
            break;

        default:
            printf("Invalid operator");
    }
}

void main()
{
    float a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);

    printf("Enter operator: ");
    scanf(" %c",&op);

    calculator(&a,&b,&op);
}