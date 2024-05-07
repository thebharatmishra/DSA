// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
void reachHome(int src, int dest)
{
    cout << "Source: " << src << "Destination: " << dest << endl;
    if (src == dest)
        cout << "Reached the destination" << endl;
    return;
    src++;
    reachHome(src, dest);
}
int main()
{
    // Code here.
    int dest = 10;
    int src = 1;

    reachHome(src, dest);
    return 0;
}