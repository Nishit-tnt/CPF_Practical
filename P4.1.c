#include<stdio.h>

int main()
{
    printf("********************************\n");
    printf("STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("********************************\n");

    printf("\n");

    int Mathematics,Physics,CPF;
    float total,average,persentage;

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
    persentage = (total/300) * 100;

    printf("Total Marks       :%f\n", total);
    printf("Average Marks     :%f\n", average);
    printf("Percentage        :%f\n", persentage);

    printf("----------------------------\n");
    printf("Acadamic Result\n");
    printf("----------------------------\n");

    printf("\n");

    if(persentage>40)
    {
        printf("Result : pass\n");
        printf("congratulations! You have successfully passed.\n");
    }

    else
    {
        printf("Result : Fail\n");
        printf("Better luck next time!\n");
    }

    printf("-----------------------------\n");

    return 0;
}
