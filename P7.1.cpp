#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string EnrollNumber, StudName, Branch, Keyword;
    string FirstName, LastName;
    

    cout<<"*******************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"*******************************************"<<endl;

    // Accept values from user

    cout<<"Entetr Enrollment Number : ";
    getline(cin,EnrollNumber);

    cout<<"Enter Student Name : ";
    getline(cin,StudName);

    cout<<"Enter Branch : ";
    getline(cin,Branch);

    cout<<"---------------------------------------------------"<<endl;

    // Generate Student Reference ID

    string StudentRef = StudName + "-" + EnrollNumber ;
    cout<<"Student Reference"<<endl;
    cout<<StudentRef<<endl;
    cout<<"--------------------------------------------------"<<endl;

    // Split Name (First/Last)

    stringstream ss(StudName);
    ss>>FirstName>>LastName;

    cout<<"First Name"<<endl;
    cout<<FirstName<<endl;

    cout<<"Last Name"<<endl;
    cout<<LastName<<endl;

    cout<<"--------------------------------------------------"<<endl;

    // Key Word Searching

    cout<<"Enter Keyword : ";
    getline(cin,Keyword);

    if(Keyword == LastName)
    {
        cout<<"keyword Found !";
    }
    else
    {
        cout<<"Keyword NOT found"<<endl;
        goto M;
    }
    cout<<endl;

    cout<<"--------------------------------------------------"<<endl;

    // Display Student Record

    cout<<"Student Report"<<endl<<endl;

    cout<<"Enrollment Number : "<<EnrollNumber<<endl;
    cout<<"Student Name : "<<StudName<<endl;
    cout<<"Branch : "<<Branch<<endl;

    cout<<"--------------------------------------------------"<<endl;
    M:cout<<"Thank You !";
    return 0;
}