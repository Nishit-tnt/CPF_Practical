#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Participant
{
    string id;
    string name;
    int score;
};

int main()
{
    Participant p[5] =
    {
        {"P101", "Aarav", 89},
        {"P102", "Meera", 87},
        {"P103", "Karan", 91},
        {"P104", "Neha", 82},
        {"P105", "Riya", 76}
    };

    int n = 5;

    cout << "***********************************************" << endl;
    cout << "          SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "***********************************************" << endl;

    // Search Participant
    cout << "\n\nSearch Participant" << endl;

    string searchID;
    cout << "Enter Participant ID: ";
    cin >> searchID;

    int found = -1;

    for (int i = 0; i < n; i++)
    {
        if (p[i].id == searchID)
        {
            found = i;
            break;
        }
    }

    cout << "\n----------------------------------------" << endl;
    cout << "          Participant Found" << endl;
    cout << "----------------------------------------" << endl;

    if (found != -1)
    {
        cout << "ID      : " << p[found].id << endl;
        cout << "Name    : " << p[found].name << endl;
        cout << "Score   : " << p[found].score << endl;
    }
    else
    {
        cout << "Participant Not Found" << endl;
    }

    // Sort participants according to score
    sort(p, p + n, [](Participant a, Participant b)
    {
        return a.score > b.score;
    });

    // Ranking List
    cout << "\n----------------------------------------" << endl;
    cout << "             Ranking List" << endl;
    cout << "----------------------------------------" << endl;

    cout << "\nRank  Name       Score" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(6) << i + 1
             << setw(11) << p[i].name
             << p[i].score << endl;
    }

    cout << "----------------------------------------" << endl;

    // Top Three Performers
    cout << "\n        Top Three Performers" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". " << p[i].name
             << "  - " << p[i].score << endl;
    }

    cout << "----------------------------------------" << endl;

    return 0;
}