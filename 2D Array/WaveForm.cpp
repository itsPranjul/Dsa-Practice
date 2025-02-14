#include <iostream>
using namespace std;

void PrintWaveForm(int a[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {

        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
                cout << a[i][j] << " ";
        }
    }
}

int main()
{
    int a[4][4];
    // int row,col;
    // cin>>row>>col;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    PrintWaveForm(a, 4, 4);
}