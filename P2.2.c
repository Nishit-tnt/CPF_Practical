#include<stdio.h>

int main()
{
    printf("********************************\n");
    printf("STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("********************************\n");

    printf("\n");

    printf("Software Version : 1.1\n");
    printf("Institute        : Charusat University\n");
    printf("Acadamic Year    : 2026-27\n");

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
