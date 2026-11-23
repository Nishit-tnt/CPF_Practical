#include <iostream>
using namespace std;

long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

long long factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}

void fibonacciIterative(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << '\n';
}

int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;
    cout << "Enter a non-negative number (0 to 20 for factorial): ";
    cin >> n;
    if (n < 0 || n > 20) {
        cout << "Please enter a number from 0 to 20.\n";
        return 0;
    }

    cout << "\nFactorial using iteration: " << factorialIterative(n) << '\n';
    cout << "Factorial using recursion: " << factorialRecursive(n) << '\n';

    int count;
    cout << "\nEnter number of Fibonacci terms (0 to 20): ";
    cin >> count;
    if (count < 0 || count > 20) {
        cout << "Please enter a number from 0 to 20.\n";
        return 0;
    }

    cout << "Fibonacci using iteration: ";
    fibonacciIterative(count);

    cout << "Fibonacci using recursion: ";
    for (int i = 0; i < count; i++)
        cout << fibonacciRecursive(i) << " ";
    cout << "\n\nComparison:\n";
    cout << "Iteration generally uses fewer function calls.\n";
    cout << "Recursive Fibonacci repeats calculations and is less efficient.\n";
    return 0;
}