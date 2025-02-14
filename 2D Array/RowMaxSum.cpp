#include <iostream>
using namespace std;

int PrintRowMaxSum(int a[][4], int row, int col)
{
    int max = INT32_MIN, index = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += a[i][j];
        }
        if (sum > max)
        {
            max = sum;
            index = i;
        }
    }
    return index;
}

int main()
{
    int a[5][4];

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << PrintRowMaxSum(a, 5, 4);
}