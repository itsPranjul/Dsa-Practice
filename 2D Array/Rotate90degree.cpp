#include <iostream>
using namespace std;

void RotateBy90Degree(int a[][3], int row, int col)
{

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < row; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    // Reverse row
    for (int i = 0; i < col; i++)
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
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
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

    RotateBy90Degree(a, 3, 3);
}