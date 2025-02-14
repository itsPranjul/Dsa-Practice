#include <iostream>
using namespace std;

void SumOfDiagonal(int a[][3])
{
    int lower = 0, upper = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            lower += a[i][j];
        }
    }
    cout << lower << " ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 3 - i; j >= i; j--)
        {
            upper += a[i][j];
        }
    }
    cout << upper;
}

int main()
{
    int a[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    SumOfDiagonal(a);
}