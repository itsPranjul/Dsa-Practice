#include <iostream>
using namespace std;

void TransposeMatrix(int a[][4], int row, int col)
{
    // int b[4][4];
    // for(int i=0;i<row;i++) {
    //     for(int j=0;j<col;j++) {
    //         b[i][j]=a[j][i];
    //     }
    // }

    // for(int i=0;i<4;i++) {
    //     for(int j=0;j<4;j++) {
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < row; j++)
        {
            swap(a[i][j], a[j][i]);
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
    int a[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    TransposeMatrix(a, 4, 4);
}