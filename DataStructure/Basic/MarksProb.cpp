// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method

int main()
{
    // Code here.
    int marks;
    cin >> marks;

    if (marks < 25)
    {
        cout << "F";
    }
    // The difference between & and && is that && returns True or False (boolean value), while & returns 0 or 1 (numeric value)
    else if (marks > 25 & marks < 44)
    {
        cout << "E";
    }
    else if (marks > 45 & marks < 49)
    {
        cout << "D";
    }
    else if (marks > 50 & marks < 59)
    {
        cout << "C";
    }
    else if (marks > 60 & marks < 79)
    {
        cout << "B";
    }
    else if (marks > 80 & marks < 100)
    {
        cout << "A";
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}