// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
void print(int n)
{
    if (n == 0)
    {
        return;
    }

    print(n - 1);
    cout << n << endl;
}
int main()
{
    // Code here.
    int n;
    cin >> n;
    print(n);
    return 0;
}