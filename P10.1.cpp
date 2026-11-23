#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct AcademicInfo {
    int semester;
    float percentage;
    string grade;
};

struct ContactInfo {
    string mobile;
    string email;
};

struct Student {
    string enrollment;
    string name;
    string branch;
    AcademicInfo academic;
    ContactInfo contact;
};

void displayStudent(const Student *s) {
    cout << "\nEnrollment Number: " << s->enrollment;
    cout << "\nStudent Name: " << s->name;
    cout << "\nBranch: " << s->branch;
    cout << "\nSemester: " << s->academic.semester;
    cout << "\nPercentage: " << fixed << setprecision(2) << s->academic.percentage;
    cout << "\nGrade: " << s->academic.grade;
    cout << "\nMobile Number: " << s->contact.mobile;
    cout << "\nEmail ID: " << s->contact.email << '\n';
}

void updateContact(Student *s) {
    cout << "Enter new mobile number: ";
    cin >> s->contact.mobile;
    cout << "Enter new email ID: ";
    cin >> s->contact.email;
}

int main() {
    int count;
    cout << "Enter number of students: ";
    cin >> count;
    if (count <= 0 || count > 100) {
        cout << "Enter a number from 1 to 100.\n";
        return 0;
    }

    Student students[100];
    for (int i = 0; i < count; i++) {
        cout << "\nStudent " << i + 1 << '\n';
        cout << "Enrollment Number: ";
        cin >> students[i].enrollment;
        cout << "Student Name: ";
        getline(cin >> ws, students[i].name);
        cout << "Branch: ";
        cin >> students[i].branch;
        cout << "Semester: ";
        cin >> students[i].academic.semester;
        cout << "Percentage: ";
        cin >> students[i].academic.percentage;
        cout << "Grade: ";
        cin >> students[i].academic.grade;
        cout << "Mobile Number: ";
        cin >> students[i].contact.mobile;
        cout << "Email ID: ";
        cin >> students[i].contact.email;
    }

    cout << "\n========== STUDENT RECORDS ==========\n";
    for (int i = 0; i < count; i++) {
        cout << "\nStudent " << i + 1 << '\n';
        displayStudent(&students[i]);
    }

    int choice;
    cout << "\nEnter student number to update contact (0 to skip): ";
    cin >> choice;
    if (choice >= 1 && choice <= count) {
        updateContact(&students[choice - 1]);
        cout << "\nUpdated student record:\n";
        displayStudent(&students[choice - 1]);
    }
    return 0;
}
