#include <iostream>
using namespace std;

void ascending(int n) {
    if (n == 0) return;
    ascending(n - 1);
    cout << n << " ";
}

void descending(int n) {
    if (n == 0) return;
    cout << n << " ";
    descending(n - 1);
}

long long reverseNumber(long long n, long long reversed = 0) {
    if (n == 0) return reversed;
    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int sumDigits(long long n) {
    if (n == 0) return 0;
    return static_cast<int>(n % 10) + sumDigits(n / 10);
}

void decimalToBinary(unsigned int n) {
    if (n > 1) decimalToBinary(n / 2);
    cout << n % 2;
}

int main() {
    int n;
    cout << "Enter a positive integer N: ";
    cin >> n;
    if (n < 1) {
        cout << "Enter a positive integer.\n";
        return 0;
    }

    cout << "Numbers from 1 to N: ";
    ascending(n);
    cout << "\nNumbers from N to 1: ";
    descending(n);

    long long number;
    cout << "\n\nEnter a non-negative number: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a non-negative number.\n";
        return 0;
    }

    cout << "Reverse: " << reverseNumber(number) << '\n';
    cout << "Sum of digits: " << sumDigits(number) << '\n';

    unsigned int decimal;
    cout << "\nEnter a decimal integer for binary conversion: ";
    cin >> decimal;
    cout << "Binary: ";
    if (decimal == 0) cout << 0;
    else decimalToBinary(decimal);
    cout << '\n';
    return 0;
}