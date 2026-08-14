#include<stdio.h>
int main()
{
    int i,j,space;

    //1-Numeric pattern
    for(i=1; i<=5; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    //2-Lowercase alphabet pattern
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c", 'a'+j-1);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    //3-Uppercase alphabet pattern
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c", 'A'+j-1);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    //4-Right Half Number Triangle
    for (i = 1; i <= 5; i++)
    {
        for (space = 1; space <= 5 - i; space++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
    printf("\n");
    printf("\n");

    //5-Full Number Pyramid
    for (i = 1; i <= 5; i++)
    {
        /* Print spaces */
        for (space = 1; space <= 5 - i; space++)
        {
            printf("  ");
        }

        /* Increasing numbers */
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        /* Decreasing numbers */
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
    printf("\n");
    printf("\n");

    //6-Full Alphabet Pyramid
    for (i = 1; i <= 5; i++)
    {
        /* Print spaces */
        for (space = 1; space <= 5 - i; space++)
        {
            printf("  ");
        }

        /* Increasing alphabets */
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }

        /* Decreasing alphabets */
        for (j = i - 1; j >= 1; j--)
        {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }
    return 0;
}
