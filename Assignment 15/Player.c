#include <stdio.h>

struct Player
{
    char name[30];
    int matches;
    int runs;
    int wickets;
};

void accept(struct Player p[])
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", p[i].name);

        printf("Enter Matches Played: ");
        scanf("%d", &p[i].matches);

        printf("Enter Runs: ");
        scanf("%d", &p[i].runs);

        printf("Enter Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void display(struct Player p[])
{
    int i;

    printf("\n--- Player Information ---\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nPlayer %d", i + 1);
        printf("\nName = %s", p[i].name);
        printf("\nMatches = %d", p[i].matches);
        printf("\nRuns = %d", p[i].runs);
        printf("\nWickets = %d\n", p[i].wickets);
    }
}

void maximum(struct Player p[])
{
    int i;
    int maxRuns = 0;
    int maxWickets = 0;
    int runIndex = 0;
    int wicketIndex = 0;

    for (i = 0; i < 10; i++)
    {
        if (p[i].runs > maxRuns)
        {
            maxRuns = p[i].runs;
            runIndex = i;
        }

        if (p[i].wickets > maxWickets)
        {
            maxWickets = p[i].wickets;
            wicketIndex = i;
        }
    }

    printf("\n--- Player with Maximum Runs ---");
    printf("\nName = %s", p[runIndex].name);
    printf("\nRuns = %d", p[runIndex].runs);

    printf("\n\n--- Player with Maximum Wickets ---");
    printf("\nName = %s", p[wicketIndex].name);
    printf("\nWickets = %d", p[wicketIndex].wickets);
}

void main()
{
    struct Player p[10];

    accept(p);
    display(p);
    maximum(p);
}