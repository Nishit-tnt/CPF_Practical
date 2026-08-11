#include<stdio.h>

int main()
{
    printf("********************************\n");
    printf("STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("********************************\n");

    printf("\n");

    int Mathematics,Physics,CPF;
    float total,average,percentage;

    printf("Enter Mathematics marks : ");
    scanf("%d",&Mathematics);

    printf("Enter Physics Marks : ");
    scanf("%d",&Physics);

    printf("Enter CPF_Marks : ");
    scanf("%d",&CPF);

    printf("----------------------------\n");
    printf("Acadamic Summary\n");
    printf("----------------------------\n");

    //calculation
    total = Mathematics + Physics + CPF;
    average = (total/3.0);
    percentage = (total/300) * 100;

    printf("Total Marks       :%f\n", total);
    printf("Average Marks     :%f\n", average);
    printf("Percentage        :%f\n", percentage);

    printf("----------------------------\n");
    printf("Acadamic Result\n");
    printf("----------------------------\n");

    printf("\n");

    if(percentage>=90 && percentage<=100)
    {
        printf("Grade : O\n");
    }

    else if(percentage>=80 && percentage<=89)
    {
        printf("Grade : A+\n");
    }
    else if(percentage>=70 && percentage<=79)
    {
        printf("Grade : A\n");
    }else if(percentage>=60 && percentage<=69)
    {
        printf("Grade : B+\n");
    }else if(percentage>=50 && percentage<=59)
    {
        printf("Grade : B\n");
    }else if(percentage>=40 && percentage<=49)
    {
        printf("Grade : c\n");
    }

    else
    {
        printf("Result : Failed\n");
        printf("Better luck next time!\n");
    }

    printf("-----------------------------\n");

    return 0;
}
