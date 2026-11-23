#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    string paragraph, extra, keyword, word;
    cout << "Enter paragraph: ";
    getline(cin, paragraph);

    int alphabets = 0, digits = 0, specialChars = 0, words = 0;
    bool inWord = false;

    for (char ch : paragraph) {
        if (isalpha(static_cast<unsigned char>(ch))) alphabets++;
        else if (isdigit(static_cast<unsigned char>(ch))) digits++;
        else if (!isspace(static_cast<unsigned char>(ch))) specialChars++;

        if (isspace(static_cast<unsigned char>(ch))) inWord = false;
        else if (!inWord) { words++; inWord = true; }
    }

    cout << "\nText Analysis\n";
    cout << "Characters: " << paragraph.length() << '\n';
    cout << "Words: " << words << '\n';
    cout << "Alphabets: " << alphabets << '\n';
    cout << "Digits: " << digits << '\n';
    cout << "Special characters: " << specialChars << '\n';

    string firstWord, lastWord;
    size_t firstPos = paragraph.find_first_not_of(" \t\n");
    size_t lastPos = paragraph.find_last_not_of(" \t\n");
    if (firstPos != string::npos) {
        size_t end = paragraph.find_first_of(" \t\n", firstPos);
        firstWord = paragraph.substr(firstPos, end - firstPos);
        size_t start = paragraph.find_last_of(" \t\n", lastPos);
        lastWord = paragraph.substr(start == string::npos ? 0 : start + 1,
                                    lastPos - (start == string::npos ? 0 : start + 1) + 1);
    }

    cout << "\nString Extraction\n";
    cout << "First word: " << firstWord << '\n';
    cout << "Last word: " << lastWord << '\n';
    if (!paragraph.empty()) {
        cout << "First character: " << paragraph.front() << '\n';
        cout << "Last character: " << paragraph.back() << '\n';
    }

    cout << "\nEnter additional sentence: ";
    getline(cin, extra);
    paragraph += "\n" + extra;
    cout << "Updated paragraph:\n" << paragraph << '\n';

    cout << "\nEnter search keyword: ";
    getline(cin, keyword);
    size_t position = paragraph.find(keyword);
    if (!keyword.empty() && position != string::npos)
        cout << "Keyword Found at position: " << position + 1 << '\n';
    else
        cout << "Keyword Not Found\n";

    string upper = paragraph, lower = paragraph;
    for (char &ch : upper) ch = static_cast<char>(toupper(static_cast<unsigned char>(ch)));
    for (char &ch : lower) ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));

    cout << "\nUppercase:\n" << upper << '\n';
    cout << "\nLowercase:\n" << lower << '\n';

    string reversed = paragraph;
    reverse(reversed.begin(), reversed.end());
    cout << "\nReverse:\n" << reversed << '\n';

    cout << "\nEnter a word to check palindrome: ";
    getline(cin, word);
    string clean = word;
    for (char &ch : clean) ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
    string rev = clean;
    reverse(rev.begin(), rev.end());
    cout << (clean == rev ? "Palindrome\n" : "Not a palindrome\n");

    string copied = paragraph;
    cout << "\nStandard String Functions\n";
    cout << "Length: " << paragraph.length() << '\n';
    cout << "Copied string: " << copied << '\n';
    cout << "Comparison with copy: " << (paragraph.compare(copied) == 0 ? "Equal" : "Not equal") << '\n';
    cout << "Substring search: " << (paragraph.find(keyword) != string::npos ? "Found" : "Not found") << '\n';
    return 0;
}