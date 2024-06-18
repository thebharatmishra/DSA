#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base case
    if (n == 0)
        return 1;

    int smallP = factorial(n - 1);
    int bigP = n * smallP;

    return bigP;
}
int main()
{

    int n;
    cin >> n;
    int ans = factorial(n);

    cout << ans;

    return 0;
}