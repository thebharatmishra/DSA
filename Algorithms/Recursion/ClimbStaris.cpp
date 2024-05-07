// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
int countDistinctWaysToClimbStair(long long nStairs)
{
    if (nStairs < 0)
        return 0;
    if (nStairs == 0)
        return 1;

    int ans = countDistinctWaysToClimbStair(nStairs - 1) + countDistinctWaysToClimbStair(nStairs - 2);
}
int main()
{
    // Code here.

    return 0;
}