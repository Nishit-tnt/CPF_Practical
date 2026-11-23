#include <iostream>
#include <string>
using namespace std;

string enrollment, name, branch;
int semester;
float marks[5], total = 0, percentage;
string grade, result;

void displayHeader() {
    cout << "====================================\n";
    cout << "   STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "====================================\n";
}

void acceptStudentDetails() {
    cout << "Enter Enrollment Number: ";
    getline(cin, enrollment);
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Branch: ";
    getline(cin, branch);
    cout << "Enter Semester: ";
    cin >> semester;

    total = 0;
    cout << "Enter marks of 5 subjects (out of 100):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
}

void calculateAcademicResult() {
    percentage = total / 5.0f;
    if (percentage >= 90) grade = "O";
    else if (percentage >= 80) grade = "A+";
    else if (percentage >= 70) grade = "A";
    else if (percentage >= 60) grade = "B+";
    else if (percentage >= 50) grade = "B";
    else if (percentage >= 40) grade = "C";
    else grade = "F";

    result = (percentage >= 40) ? "PASS" : "FAIL";
}

void displayStudentReport() {
    cout << "\n------------- Academic Report -------------\n";
    cout << "Enrollment Number: " << enrollment << '\n';
    cout << "Student Name: " << name << '\n';
    cout << "Branch: " << branch << '\n';
    cout << "Semester: " << semester << '\n';
    cout << "Total Marks: " << total << " / 500\n";
    cout << "Percentage: " << percentage << "%\n";
    cout << "Grade: " << grade << '\n';
    cout << "Result: " << result << '\n';
    cout << "-------------------------------------------\n";
}

int main() {
    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();
    return 0;
}