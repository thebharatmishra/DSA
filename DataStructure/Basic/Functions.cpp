// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
void printName(string name)
{
    cout << name;
}
int sum(int num1, int num2)
{
    return num1 + num2;
}

// pass by reference
void doSomething(string s)
{
    s[4] = 't';
    cout << s << endl;
}

int main()
{
    string s = "Bhanu";
    doSomething(s);
    cout << s << endl;
    cout << sum(6, 9);
    // Code here.
    return 0;
}