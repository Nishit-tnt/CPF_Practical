#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int globalValue = 100;

int main() {
    cout << "========== PROGRAM EXECUTION & ERROR HANDLING ==========\n";

    int localValue = 200;
    int *dynamicValue = new int(300);

    cout << "Global variable: " << globalValue << '\n';
    cout << "Local variable: " << localValue << '\n';
    cout << "Dynamic memory value: " << *dynamicValue << '\n';

    // Demonstrate overflow safely using a wider type for the calculation.
    int maximum = numeric_limits<int>::max();
    long long overflowResult = static_cast<long long>(maximum) + 1;
    cout << "\nOverflow demonstration (calculated in long long): "
         << overflowResult << '\n';
    cout << "The result exceeds the maximum value of int.\n";

    int value = 50;
    int *firstPointer = &value;
    int *secondPointer = &value;
    *firstPointer = 75;
    cout << "\nPointer aliasing\n";
    cout << "Value through first pointer: " << *firstPointer << '\n';
    cout << "Value through second pointer: " << *secondPointer << '\n';

    int *memory = new int(500);
    cout << "\nDynamic memory allocated: " << *memory << '\n';
    delete memory;
    memory = nullptr;
    cout << "Memory released successfully.\n";

    double dividend, divisor;
    cout << "\nEnter dividend and divisor: ";
    if (!(cin >> dividend >> divisor)) {
        cout << "Error: Invalid numerical input.\n";
        return 0;
    }
    if (divisor == 0)
        cout << "Error: Division by zero is not allowed.\n";
    else
        cout << "Division result: " << dividend / divisor << '\n';

    ifstream file("missing_file.txt");
    if (!file.is_open())
        cout << "\nFile error: Unable to open missing_file.txt.\n";
    else
        file.close();

    delete dynamicValue;
    dynamicValue = nullptr;
    return 0;
}