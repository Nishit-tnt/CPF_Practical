#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"***************************"<<endl;
    cout<<"SPORTS EVENT SCORE ANALYSIS"<<endl;
    cout<<"***************************"<<endl;

    //entering numaber of participent
    int NOP,SCR[100],i;
    char PID[100][5],PN[100][20];

    cout<<"Enter Number of Particpents :";
    cin>>NOP;

    for(i=1; i<=NOP; i++)
    {

        cout<<"Enter Particepent ID :";
        cin>>PID[i];

        cout<<"Enter Particepent Name :";
        cin>>PN[i];

        cout<<"Enter Score :";
        cin>>SCR[i];
    }
    cout<<"-----------------------"<<endl;
    cout<<"Particepent Performence"<<endl;
    cout<<"-----------------------"<<endl;
    
    //Tebular formate

    cout<<"ID"<<setw(8)<<"Name"<<setw(15)<<"Score"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(i=1; i<=NOP; i++)
    {
        cout<<PID[i]<<setw(8)<<PN[i]<<setw(15)<<SCR[i]<<endl;
    }

    //Calculating Total,Highest and Lowest score.

    int total = 0;
    int highest = SCR[0];
    int lowest = SCR[0];

    for(i=0; i<=NOP; i++)
    {
        total = total + SCR[i];

        if (SCR[i] > highest)
            highest = SCR[i];

        if (SCR[i] < lowest)
            lowest = SCR[i];
    }

    //Calculating average.
    
     double Average = (double)total / NOP;

    //Print Total,Highest and Lowest score.

    cout << "Total Score = " << total<< endl;
    cout << "Average Score = " << Average<< endl;
    cout << "Highest Score = " << highest << endl;
    cout << "Lowest Score = " << lowest<< endl;

    return 0;
}