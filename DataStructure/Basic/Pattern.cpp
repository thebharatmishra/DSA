#include <iostream>
using namespace std;

void pattern1(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = col; j > 0; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

int main()
{
    pattern2(4, 5);
    return 0;
}