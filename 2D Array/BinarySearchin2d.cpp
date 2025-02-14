#include <iostream>
using namespace std;

int BinarySearchin2D(int a[][4], int row, int col, int x)
{
    for (int i = 0; i < row; i++)
    {
        if (a[i][0] <= x && a[i][col - 1] >= x)
        {
            int start = 0, end = col - 1, mid;

            while (start <= end)
            {
                mid = (start + end) / 2;
                if (a[i][mid] == x)
                {
                    return 1;
                }
                else if (a[i][mid] > x)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            return 0;
        }
    }
}

int main()
{
    int a[4][4];
    int target = 15;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << BinarySearchin2D(a, 4, 4, target);
}