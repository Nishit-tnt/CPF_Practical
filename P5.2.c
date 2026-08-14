#include <stdio.h>
#include <string.h>

int main()
{
    char enrollment[20];
    char name[50];
    char branch[20];
    char mobile[20];
    int semester;
    char choice = 'Y';

    printf("**********************************************\n");
    printf("       STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("**********************************************\n\n");

    printf("Student Registration\n\n");

    while (choice == 'Y' || choice == 'y')
    {
        printf("Enrollment Number : ");
        scanf("%s", enrollment);

        printf("Student Name      : ");
        scanf(" %s", name);

        printf("Branch            : ");
        scanf("%s", branch);

        printf("Semester          : ");
        scanf("%d", &semester);

        printf("Mobile Number     : ");
        scanf("%s", mobile);

        printf("\nStudent Registered Successfully.\n");

        printf("\nRegister Another student? (Y/N) : ");
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y')
        {
            printf("\n------------------------------------------\n\n");
        }
    }

    printf("\nReturning to Main Menu...\n");

    return 0;
}
