#include<stdio.h>

int main()
{
    printf("********************************\n");
    printf("STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("********************************\n");

    printf("\n");

    printf("Software Version : 1.1\n");

    printf("\n");

    printf("----------------------------\n");
    printf("Student Registration\n");
    printf("----------------------------\n");

    printf("\n");

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

    printf("----------------------------\n");
    printf("Acadamic Informaton\n");
    printf("----------------------------\n");

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
    printf("Student Information\n");
    printf("----------------------------\n");

    printf("\n");

    printf("Enrollment number :  %s\n",Enrollment_No);
    printf("Student name      :  %s\n",Student_name);
    printf("Branch            :  %s\n",Branch);
    printf("Semester          :  %d\n",Semester);
    printf("Mobile Number     :  %s\n",Mobile_Number);

    printf("-----------------------------\n");

    return 0;
}
