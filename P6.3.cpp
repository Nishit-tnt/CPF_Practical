#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string enrollment;
    string name;
    float percentage;
    string grade;
};

int main()
{
    Student students[100];
    int n;

    cout << "**********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**********************************************" << endl;

    // Enter number of students
    cout << "\nEnter Number of Students : ";
    cin >> n;

    // Enter student details
    cout << "\nEnter Student Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Enrollment Number : ";
        cin >> students[i].enrollment;

        cout << "Enter Student Name      : ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Enter Percentage        : ";
        cin >> students[i].percentage;

        cout << "Enter Grade             : ";
        cin >> students[i].grade;
    }

    // Display current records
    cout << "\n------------------------------------------" << endl;
    cout << "Current Student Records" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << students[i].enrollment << "  "
             << students[i].name << "  "
             << students[i].percentage << endl;
    }

    // INSERT STUDENT
    cout << "\n------------------------------------------" << endl;
    cout << "Insert New Student" << endl;

    int position;
    cout << "\nEnter Position : ";
    cin >> position;

    // Convert position to array index
    int index = position - 1;

    // Shift records to the right
    for (int i = n; i > index; i--)
    {
        students[i] = students[i - 1];
    }

    cout << "Enter Enrollment Number : ";
    cin >> students[index].enrollment;

    cout << "Enter Student Name      : ";
    cin.ignore();
    getline(cin, students[index].name);

    cout << "Enter Percentage        : ";
    cin >> students[index].percentage;

    cout << "Enter Grade             : ";
    cin >> students[index].grade;

    n++;

    cout << "\nRecord Inserted Successfully." << endl;

    // Display updated records
    cout << "\n------------------------------------------" << endl;
    cout << "Updated Student Records" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << students[i].enrollment << "  "
             << students[i].name << "  "
             << students[i].percentage << endl;
    }

    // UPDATE STUDENT
    cout << "\n------------------------------------------" << endl;
    cout << "Update Student Record" << endl;

    string enrollmentNumber;
    cout << "\nEnter Enrollment Number : ";
    cin >> enrollmentNumber;

    int found = -1;

    for (int i = 0; i < n; i++)
    {
        if (students[i].enrollment == enrollmentNumber)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        cout << "Enter New Percentage : ";
        cin >> students[found].percentage;

        cout << "Enter New Grade      : ";
        cin >> students[found].grade;

        cout << "\nRecord Updated Successfully." << endl;
    }
    else
    {
        cout << "\nStudent Record Not Found." << endl;
    }

    // DELETE STUDENT
    cout << "\n------------------------------------------" << endl;
    cout << "Delete Student Record" << endl;

    cout << "\nEnter Position : ";
    cin >> position;

    index = position - 1;

    if (index >= 0 && index < n)
    {
        // Shift records to the left
        for (int i = index; i < n - 1; i++)
        {
            students[i] = students[i + 1];
        }

        n--;

        cout << "\nRecord Deleted Successfully." << endl;
    }
    else
    {
        cout << "\nInvalid Position." << endl;
    }

    // FINAL RECORDS
    cout << "\n------------------------------------------" << endl;
    cout << "Final Student Records" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << students[i].enrollment << "  "
             << students[i].name << "  "
             << students[i].percentage << "  "
             << students[i].grade << endl;
    }

    cout << "\n------------------------------------------" << endl;

    return 0;
}