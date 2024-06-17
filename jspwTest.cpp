#include <bits/stdc++.h>

using namespace std;

int f(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}
int main()
{
    // Memoization
    int n;
    cin >> n;
    // int dp[n + 1];
    // memset(dp, -1, sizeof dp);
    vector<int> dp(n + 1, -1);
    cout << f(n, dp);

    // Tabulation
    int m;
    cin >> m;
    int prev2 = 0;
    int prev1 = 1;
    for (int i = 0; i < m; i++)
    {
        int curi = prev1 + prev2;
        prev2 = prev1;
        prev1 = curi;
    }
    cout << prev1;
    return 0;
}