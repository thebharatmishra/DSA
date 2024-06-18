// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
int fibonacci(int n)
{
    // base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}
int main()
{
    // Code here.
    int n;
    cin >> n;
    cout << "The value of Fibonacci is " << n << endl;
    return 0;
}