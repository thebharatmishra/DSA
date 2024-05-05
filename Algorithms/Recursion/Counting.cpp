// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
void print(int n)
{
    if (n == 0)
    {
        return 0;
    }

    cout << n << endl;
    print(n - 1);
}
int main()
{
    // Code here.
    int n;
    cin >> n;
    print(n);
    return 0;
}