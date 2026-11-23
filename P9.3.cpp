#include <iostream>
using namespace std;

void displayStackValue() {
    int localValue = 100;
    cout << "Stack variable value: " << localValue << '\n';
    cout << "Stack variable address: " << static_cast<void*>(&localValue) << '\n';
}

int main() {
    cout << "========== MEMORY ORGANIZATION ANALYZER ==========\n";

    displayStackValue();

    int *heapValue = new int(250);
    cout << "\nDynamically allocated value: " << *heapValue << '\n';
    cout << "Heap memory address: " << static_cast<void*>(heapValue) << '\n';
    delete heapValue;
    heapValue = nullptr;
    cout << "Dynamic memory released; pointer set to nullptr.\n";

    int value = 50;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    cout << "\nOriginal value: " << value << '\n';
    cout << "Single-level access: " << *ptr1 << '\n';
    cout << "Double-level access: " << **ptr2 << '\n';
    cout << "Triple-level access: " << ***ptr3 << '\n';

    int *nullPointer = nullptr;
    cout << "\nNull pointer check: ";
    if (nullPointer == nullptr) cout << "Safe (pointer is NULL)\n";

    int *releasedPointer = new int(75);
    delete releasedPointer;
    releasedPointer = nullptr;
    cout << "Released pointer reset to nullptr; it is not dereferenced.\n";

    int *uninitializedPointer; // Deliberately not read or dereferenced.
    (void)uninitializedPointer;
    cout << "Uninitialized pointer: unsafe to access; not dereferenced.\n";

    return 0;
}