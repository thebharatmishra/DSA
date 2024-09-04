// Necessary Imports
#include <bits/stdc++.h>

using namespace std;
// Define a Class or Method

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << " ";
    pair<int, pair<int, int>> pp = {2, {5, 7}};
    cout << pp.first << " % " << pp.second.second << " " << pp.second.first;
}
int main()
{
    // Code here.
    explainPair();

    return 0;
}
