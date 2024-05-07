// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
void reachHome(int src, int dest)
{
    if (src == dest)
        cout << "Reached the destination";
    return;
    src++ reachHome(src, dest);
}
int main()
{
    // Code here.
    int dest = 10;
    int src = 1;

    reachHome(src, dest);
    return 0;
}