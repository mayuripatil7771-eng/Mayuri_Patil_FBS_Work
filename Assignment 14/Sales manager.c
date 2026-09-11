#include <stdio.h>

struct SalesManager
{
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
};

void store(struct SalesManager *s)
{
    printf("Enter ID: ");
    scanf("%d", &s->id);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Salary: ");
    scanf("%f", &s->salary);

    printf("Enter Incentive: ");
    scanf("%f", &s->incentive);

    printf("Enter Target: ");
    scanf("%d", &s->target);
}

void display(struct SalesManager *s)
{
    printf("\nID = %d", s->id);
    printf("\nName = %s", s->name);
    printf("\nSalary = %.2f", s->salary);
    printf("\nIncentive = %.2f", s->incentive);
    printf("\nTarget = %d", s->target);
}

void main()
{
    struct SalesManager s;

    store(&s);
    display(&s);
}