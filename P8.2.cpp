#include <iostream>
using namespace std;

int globalValue = 100;

void function1() {
    cout << "Function without parameters and without return value.\n";
}

int function2() {
    return 50;
}

void function3(int number) {
    cout << "Received number: " << number << '\n';
}

int function4(int a, int b) {
    return a + b;
}

void callByValue(int x) {
    x = x + 10;
    cout << "Inside callByValue: " << x << '\n';
}

void callByReference(int &x) {
    x = x + 10;
    cout << "Inside callByReference: " << x << '\n';
}

void showStudent(string name) {
    cout << "Student Name: " << name << '\n';
}

void showStudent(string name, string branch) {
    cout << "Student Name: " << name << "\nBranch: " << branch << '\n';
}

void showStudent(string name, string branch, int semester) {
    cout << "Student Name: " << name << "\nBranch: " << branch
         << "\nSemester: " << semester << '\n';
}

void showScope() {
    int localValue = 20;
    cout << "Local variable: " << localValue << '\n';
    cout << "Global variable inside function: " << globalValue << '\n';
}

int main() {
    function1();
    cout << "Function with return value: " << function2() << '\n';
    function3(25);
    cout << "Function with parameters and return value: " << function4(10, 20) << '\n';

    int number = 5;
    cout << "\nCall by Value\nBefore: " << number << '\n';
    callByValue(number);
    cout << "After: " << number << '\n';

    cout << "\nCall by Reference\nBefore: " << number << '\n';
    callByReference(number);
    cout << "After: " << number << '\n';

    cout << "\nScope and Visibility\n";
    showScope();
    cout << "Global variable in main: " << globalValue << '\n';

    cout << "\nFunction Overloading\n";
    showStudent("Amit Patel");
    showStudent("Amit Patel", "CE");
    showStudent("Amit Patel", "CE", 1);
    return 0;
}