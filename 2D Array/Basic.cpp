#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int row, col;
    cout << "Enter a no. of row: ";
    cin >> row;
    cout << "Enter a no. of column: ";
    cin >> col;

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
}