#include <stdio.h>

int main()
{
    int n, i;
    int marks, total = 0;
    float average, percentage;

    printf("***********************************************\n");
    printf("       STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("***********************************************\n");

    printf("\n");

    printf("Enter Number of Subjects : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter Marks of Subject %d : ",i);
        scanf("%d", &marks);

        total = total + marks;
    }


    average = (float)total / n;
    percentage = (float)total / (n * 100) * 100;

    printf("\n-----------------------------------------------\n");
    printf("Academic Result\n");
    printf("-----------------------------------------------\n");

    printf("\n");

    printf("Total Marks       : %d\n", total);
    printf("Average Marks     : %.2f\n", average);
    printf("Percentage        : %.2f%%\n\n", percentage);


    printf("Result            : ");

    if (percentage >= 40)
        printf("PASS\n");
    else
        printf("FAIL\n");

    printf("Grade             : ");

    if (percentage >= 90)
        printf("A+\n");
    else if (percentage >= 80)
        printf("A\n");
    else if (percentage >= 70)
        printf("B+\n");
    else if (percentage >= 60)
        printf("B\n");
    else if (percentage >= 50)
        printf("C\n");
    else if (percentage >= 40)
        printf("D\n");
    else
        printf("F\n");

    printf("Performance       : ");

    if (percentage >= 90)
        printf("Excellent\n");
    else if (percentage >= 80)
        printf("Very Good\n");
    else if (percentage >= 70)
        printf("Good\n");
    else if (percentage >= 60)
        printf("Average\n");
    else if (percentage >= 40)
        printf("Pass\n");
    else
        printf("Poor\n");

    printf("\n-----------------------------------------------\n");

    return 0;
}
