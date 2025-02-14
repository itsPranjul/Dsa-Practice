#include <iostream>
using namespace std;

int SearchElement(int arr[][3], int row, int col, int x)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == x)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int target = 1;
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int res = SearchElement(a, 3, 3, target);
    if (res == 1)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is not present";
    }
}