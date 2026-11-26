#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string enrollment, name, branch, grade;
    int semester;
    float percentage;
};

int main() {
    int count;
    cout << "========== STUDENT RECORD MANAGEMENT SYSTEM ==========\n";
    cout << "Enter number of students: ";
    cin >> count;

    if (count <= 0 || count > 100) {
        cout << "Enter a number from 1 to 100.\n";
        return 0;
    }

    ofstream outFile("StudentRecords.txt");
    if (!outFile) {
        cout << "Error: Cannot create StudentRecords.txt\n";
        return 1;
    }

    for (int i = 0; i < count; i++) {
        Student s;
        cout << "\nStudent " << i + 1 << '\n';
        cout << "Enrollment Number: ";
        cin >> s.enrollment;
        cout << "Student Name: ";
        getline(cin >> ws, s.name);
        cout << "Branch: ";
        cin >> s.branch;
        cout << "Semester: ";
        cin >> s.semester;
        cout << "Percentage: ";
        cin >> s.percentage;
        cout << "Grade: ";
        cin >> s.grade;

        // One field per line keeps records easy to read back.
        outFile << s.enrollment << '\n'
                << s.name << '\n'
                << s.branch << '\n'
                << s.semester << '\n'
                << s.percentage << '\n'
                << s.grade << '\n';
    }
    outFile.close();
    cout << "\nStudent records stored successfully.\n";

    ifstream inFile("StudentRecords.txt");
    if (!inFile) {
        cout << "Error: Cannot open StudentRecords.txt for reading.\n";
        return 1;
    }

    cout << "\nReading StudentRecords.txt\n";
    Student s;
    int recordNumber = 1;
    while (getline(inFile, s.enrollment)) {
        if (!getline(inFile, s.name) ||
            !getline(inFile, s.branch) ||
            !(inFile >> s.semester) ||
            !(inFile >> s.percentage) ||
            !(inFile >> s.grade)) {
            cout << "Error: Incomplete or damaged student record.\n";
            inFile.close();
            return 1;
        }
        inFile.ignore(10000, '\n');

        cout << "\nStudent " << recordNumber++ << '\n';
        cout << "Enrollment: " << s.enrollment << '\n';
        cout << "Name: " << s.name << '\n';
        cout << "Branch: " << s.branch << '\n';
        cout << "Semester: " << s.semester << '\n';
        cout << "Percentage: " << fixed << setprecision(2) << s.percentage << '\n';
        cout << "Grade: " << s.grade << '\n';
    }
    if (inFile.bad()) {
        cout << "Error while reading student records.\n";
        inFile.close();
        return 1;
    }
    inFile.close();
    cout << "\nAll student records read successfully.\n";

    ifstream source("StudentRecords.txt", ios::binary);
    if (!source) {
        cout << "Error: Cannot open source file for backup.\n";
        return 1;
    }

    ofstream backup("BackupStudentRecords.txt", ios::binary);
    if (!backup) {
        cout << "Error: Cannot create BackupStudentRecords.txt\n";
        source.close();
        return 1;
    }

    backup << source.rdbuf();
    bool copied = backup.good() && !source.bad();
    source.close();
    backup.close();

    if (copied)
        cout << "BackupStudentRecords.txt created successfully.\n";
    else
        cout << "Error occurred while creating backup.\n";

    return 0;
}
