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
    else if (marks > 25 & marks < 44)
    {
        cout << "";
    }
    else if (marks > 45 & marks < 49)
    {
        cout << "";
    }
    else if (marks > 50 & marks < 59)
    {
        cout << "";
    }
    else if (marks > 60 & marks < 79)
    {
        cout << "";
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