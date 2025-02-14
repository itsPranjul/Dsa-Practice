#include <iostream>
using namespace std;

void ReverseRowArray(int a[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start < end)
        {
            swap(a[i][start], a[i][end]);
            start++;
            end--;
        }
    }
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cout << a[i][j] << " ";
}

int main()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    ReverseRowArray(a, 3, 3);
}