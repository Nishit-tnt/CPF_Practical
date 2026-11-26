#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ofstream outputFile("Document.txt");

    if (!outputFile) {
        cout << "Error: Unable to create Document.txt\n";
        return 1;
    }

    cout << "Enter file contents (type END on a new line to finish):\n";
    while (true) {
        getline(cin, line);
        if (line == "END") break;
        outputFile << line << '\n';
    }
    outputFile.close();
    cout << "Document.txt created and written successfully.\n";

    ifstream inputFile("Document.txt");
    if (!inputFile) {
        cout << "Error: Unable to open Document.txt for reading.\n";
        return 1;
    }

    cout << "\nReading Document.txt\n";
    string contents, currentLine;
    while (getline(inputFile, currentLine)) {
        cout << currentLine << '\n';
        contents += currentLine + '\n';
    }
    if (inputFile.eof()) cout << "End of file reached.\n";
    if (inputFile.bad()) {
        cout << "Error while reading file.\n";
        inputFile.close();
        return 1;
    }

    inputFile.clear();
    inputFile.seekg(0, ios::end);
    streampos fileSize = inputFile.tellg();
    cout << "\nCurrent file position at end: " << fileSize << '\n';

    inputFile.seekg(0, ios::beg);
    cout << "\nContents after resetting file pointer:\n";
    while (getline(inputFile, currentLine)) cout << currentLine << '\n';
    inputFile.close();

    ifstream source("Document.txt", ios::binary);
    ofstream backup("BackupDocument.txt", ios::binary);
    if (!source || !backup) {
        cout << "Error: Unable to open source or backup file.\n";
        return 1;
    }

    backup << source.rdbuf();
    if (!source.bad() && backup.good())
        cout << "\nBackupDocument.txt created successfully.\n";
    else
        cout << "\nError occurred while copying the file.\n";

    source.close();
    backup.close();
    return 0;
}
