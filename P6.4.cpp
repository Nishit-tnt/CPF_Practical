#include <iostream>
using namespace std;

int main() 
{
    // PART A

    //Declaration

    int N = 3;

    int firstMatrix[3][3] = 
    {
        {2, 5, 8},
        {3, 6, 9},
        {4, 7, 10}
    };

    int secondMatrix[3][3] = 
    {
        {2, 3, 4},
        {9, 7, 6},
        {1, 5, 2}
    };

    int resultMatrix[3][3];

    // Multiply the matrices

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < N; k++) 
            {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // Display the output

    cout << "Part A - Matrix Multiplication" << endl;
    cout << "*********************************************" << endl;
    cout << "    MATRIX MULTIPLICATION" << endl;
    cout << "*********************************************" << endl;
    cout << endl;

    cout << "First Matrix" << endl << endl;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cout << firstMatrix[i][j];
            if (j != N - 1) cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Second Matrix" << endl << endl;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cout << secondMatrix[i][j];
            if (j != N - 1) cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "-------------------------------------------" << endl;
    cout << endl;

    cout << "Resultant Matrix" << endl;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cout << resultMatrix[i][j];
            if (j != N - 1) cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "-------------------------------------------" << endl;


    
    // PART B

    int firstArray[5] = {10, 20, 30, 40, 60};
    int secondArray[5] = {15, 25, 35, 45, 55};
    int n1 = 5, n2 = 5;
    int mergedArray[10];

    // Merge the two sorted arrays
    
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) 
    {
        if (firstArray[i] <= secondArray[j]) 
        {
            mergedArray[k++] = firstArray[i++];
        } 
        else 
        {
            mergedArray[k++] = secondArray[j++];
        }
    }
    while (i < n1) 
    {
        mergedArray[k++] = firstArray[i++];
    }
    while (j < n2) 
    {
        mergedArray[k++] = secondArray[j++];
    }

    cout << "Part B - Merge Two Sorted Arrays" << endl;
    cout << "*********************************************" << endl;
    cout << "    MERGE SORTED ARRAYS" << endl;
    cout << "*********************************************" << endl;
    cout << endl;

    cout << "First Array" << endl << endl;
    for (int x = 0; x < n1; x++) 
    {
        cout << firstArray[x];
        if (x != n1 - 1) cout << " ";
    }
    cout << endl << endl;

    cout << "Second Array" << endl << endl;
    for (int x = 0; x < n2; x++) 
    {
        cout << secondArray[x];
        if (x != n2 - 1) cout << " ";
    }
    cout << endl << endl;

    cout << "-------------------------------------------" << endl;
    cout << endl;

    cout << "Merged Sorted Array" << endl << endl;
    for (int x = 0; x < n1 + n2; x++) 
    {
        cout << mergedArray[x];
        if (x != n1 + n2 - 1) cout << " ";
    }
    cout << endl;

    return 0;
}