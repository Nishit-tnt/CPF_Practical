#include <iostream>
using namespace std;

int main() {
    int integerValue = 25;
    char characterValue = 'A';
    float floatValue = 85.60f;

    cout << "========== MEMORY ADDRESS EXPLORER ==========\n";
    cout << "Integer value: " << integerValue << '\n';
    cout << "Integer address: " << static_cast<void*>(&integerValue) << "\n\n";

    cout << "Character value: " << characterValue << '\n';
    cout << "Character address: " << static_cast<void*>(&characterValue) << "\n\n";

    cout << "Float value: " << floatValue << '\n';
    cout << "Float address: " << static_cast<void*>(&floatValue) << "\n\n";

    int *ptr = &integerValue;
    cout << "Indirect referencing value: " << *ptr << '\n';
    *ptr = 30;
    cout << "Modified value through pointer: " << integerValue << '\n';

    int arr[5] = {10, 20, 30, 40, 50};
    cout << "\nArray using indexing: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";

    cout << "\nArray using address-based access: ";
    for (int i = 0; i < 5; i++) cout << *(arr + i) << " ";
    cout << '\n';
    return 0;
}
