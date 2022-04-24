#include <iostream>
using namespace std;
bool equality(int a[][4], int b[][4]) 
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}
int main()
{
    int a [4][4];
    int b [4][4];
    cout << "Enter values" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
            cin >> b[i][j];
        }
    }
    if (equality(a, b))
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;
}
