#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

void addMovie(struct Movie m[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Movie %d Details\n", i + 1);

        printf("Enter Title: ");
        scanf("%s", m[i].title);

        printf("Enter Director: ");
        scanf("%s", m[i].director);

        printf("Enter Release Year: ");
        scanf("%d", &m[i].year);

        printf("Enter Genre: ");
        scanf("%s", m[i].genre);
    }
}

void displayMovies(struct Movie m[], int n)
{
    int i;

    printf("\n----- Movie Database -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nMovie %d", i + 1);
        printf("\nTitle = %s", m[i].title);
        printf("\nDirector = %s", m[i].director);
        printf("\nRelease Year = %d", m[i].year);
        printf("\nGenre = %s\n", m[i].genre);
    }
}

void searchMovie(struct Movie m[], int n)
{
    char title[50];
    int i, found = 0;

    printf("\nEnter movie title to search: ");
    scanf("%s", title);

    for (i = 0; i < n; i++)
    {
        if (strcmp(m[i].title, title) == 0)
        {
            printf("\nMovie Found!");
            printf("\nTitle = %s", m[i].title);
            printf("\nDirector = %s", m[i].director);
            printf("\nRelease Year = %d", m[i].year);
            printf("\nGenre = %s", m[i].genre);

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nMovie Not Found");
}

void updateMovie(struct Movie m[], int n)
{
    char title[50];
    int i, found = 0;

    printf("\nEnter movie title to update: ");
    scanf("%s", title);

    for (i = 0; i < n; i++)
    {
        if (strcmp(m[i].title, title) == 0)
        {
            printf("Enter New Director: ");
            scanf("%s", m[i].director);

            printf("Enter New Release Year: ");
            scanf("%d", &m[i].year);

            printf("Enter New Genre: ");
            scanf("%s", m[i].genre);

            printf("\nMovie Updated Successfully!");

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nMovie Not Found");
}

void main()
{
    struct Movie m[20];
    int n, choice;

    printf("Enter number of movies: ");
    scanf("%d", &n);

    addMovie(m, n);

    do
    {
        printf("\n\n1. Display Movies");
        printf("\n2. Search Movie");
        printf("\n3. Update Movie");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            displayMovies(m, n);
            break;

        case 2:
            searchMovie(m, n);
            break;

        case 3:
            updateMovie(m, n);
            break;

        case 4:
            printf("\nProgram Ended");
            break;

        default:
            printf("\nInvalid Choice");
        }

    } while (choice != 4);
}