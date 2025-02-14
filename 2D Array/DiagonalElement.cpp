#include <iostream>
using namespace std;

void PrintDiagonal(int a[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        cout << "First Diagonal" << a[i][i] << " ";
    }

    int i = 0, j = col - 1;
    while (j >= 0)
    {
        cout << "Second Diagonal" << a[i][j] << " ";
        i++;
        j--;
    }
}

int main()
{
    int a[4][4];

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    PrintDiagonal(a, 4, 4);
}