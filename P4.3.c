#include<stdio.h>
int main()

{
    short int choice;

    printf("********************************\n");
    printf("SYUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("********************************\n");
    printf("\n");
    M:printf("--------------Main Menu----------------\n");
    printf("\n");
    printf("Enter Your choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Register new student\n");

        printf("********************************\n");
        printf("STUDENT REGISTRATION\n");
        printf("********************************\n");

        int Semester;
        char Mobile_Number[50];
        char Student_name[50];
        char Branch[50];
        char Enrollment_No[20];

        printf("Enter Enrollment no : ");
        scanf("%s",Enrollment_No);

        printf("Enter Student name : ");
        scanf("%s",Student_name);

        printf("Enter Branch : ");
        scanf("%s",Branch);

        printf("Enter Semester : ");
        scanf("%d",&Semester);

        printf("Enter Mobile Number : ");
        scanf("%s",&Mobile_Number);

        printf("\n");

        printf("Student registered successfully!");
        goto M;
        break;

        case 2:
        printf("Display Student Record\n");

        printf("----------------------------\n");
        printf("Student Record\n");
        printf("----------------------------\n");

        printf("Enrollment number : 26TCEJ5L\n");
        printf("Student name : Nishit Titiya\n");
        printf("Branch : CE\n");
        printf("Semester : 1\n");
        printf("Mobile Number : 8200528211\n");
        goto M;
        break;

        case 3:
        printf("Enter student Marks\n");

        printf("----------------------------\n");
        printf("Student Marks\n");
        printf("----------------------------\n");

        int Mathematics,Physics,CPF;
        float total,average,persentage;

        printf("Enter Mathematics marks : ");
        scanf("%d",&Mathematics);

        printf("Enter Physics Marks : ");
        scanf("%d",&Physics);

        printf("Enter CPF_Marks : ");
        scanf("%d",&CPF);
        printf("\n");
        printf("Marks entered successfully\n");
        goto M;
        break;
        case 4:
        printf("Display Academic Result\n");

        total = Mathematics + Physics + CPF;
        average = (total/3.0);
        persentage = (total/300) * 100;

        if(persentage>40)
    {
        printf("Result : pass\n");
        printf("congratulations! You have successfully passed.\n");
    }

    else
    {
        printf("Result : Fail\n");
        printf("Better luck next time!\n");
    }   goto M;
        break;

        default:
        printf("Exit\n");
        goto M;
    }

}
