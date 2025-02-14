#include <iostream>
using namespace std;

void PrintSpiralForm(int a[][3], int row, int col)
{
    int top = 0, bottom = row - 1, left = 0, right = col - 1;

    while (top <= bottom && left <= right)
    {

        for (int j = left; j <= right; j++)
        {
            cout << a[top][j] << " ";
            top++;
        }
        for (int i = top; i <= bottom; i++)
        {
            cout << a[i][right] << " ";
            right--;
        }

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << a[bottom][j] << " ";
                bottom--;
            }
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << a[i][left] << " ";
                left++;
            }
        }
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

    PrintSpiralForm(a, 3, 3);
}