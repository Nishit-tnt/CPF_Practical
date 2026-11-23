#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

struct Student {
    string enrollment, name, branch, grade;
    int semester;
    float percentage;
};

void displayStudents(Student *students, int count) {
    cout << "\nStudent Records using Address-based Access\n";
    for (int i = 0; i < count; i++) {
        Student *current = students + i;
        cout << "\nAddress: " << static_cast<void*>(current) << '\n';
        cout << current->enrollment << " | " << current->name << " | "
             << current->branch << " | " << current->semester << " | "
             << fixed << setprecision(2) << current->percentage << " | "
             << current->grade << '\n';
    }
}

float classAverage(Student *students, int count) {
    float total = 0;
    for (int i = 0; i < count; i++) total += (students + i)->percentage;
    return count ? total / count : 0;
}

int main() {
    int count;
    cout << "Enter number of students: ";
    cin >> count;
    if (count <= 0) {
        cout << "Invalid number of students.\n";
        return 0;
    }

    Student *students = new Student[count];

    for (int i = 0; i < count; i++) {
        cout << "\nStudent " << i + 1 << '\n';
        cout << "Enrollment Number: ";
        cin >> students[i].enrollment;
        cout << "Student Name: ";
        getline(cin >> ws, students[i].name);
        cout << "Branch: ";
        cin >> students[i].branch;
        cout << "Semester: ";
        cin >> students[i].semester;
        cout << "Percentage: ";
        cin >> students[i].percentage;
        cout << "Grade: ";
        cin >> students[i].grade;
    }

    displayStudents(students, count);

    float highest = students[0].percentage;
    float lowest = students[0].percentage;
    for (int i = 1; i < count; i++) {
        if (students[i].percentage > highest) highest = students[i].percentage;
        if (students[i].percentage < lowest) lowest = students[i].percentage;
    }

    cout << "\nClass Average: " << classAverage(students, count) << "%\n";
    cout << "Highest Percentage: " << highest << "%\n";
    cout << "Lowest Percentage: " << lowest << "%\n";

    delete[] students;
    students = nullptr;
    cout << "\nDynamic memory released successfully.\n";
    cout << "Address variable reset successfully.\n";
    return 0;
}