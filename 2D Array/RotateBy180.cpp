#include <iostream>
using namespace std;

void RotateBy180Degree(int a[][4], int row, int col)
{

    int i = 0;

    while (i < 2)
    {
        for (int i = 0; i < row - 1; i++)
        {
            for (int j = i + 1; j < row; j++)
            {
                swap(a[i][j], a[j][i]);
            }
        }

        for (int i = 0; i < row; i++)
        {
            int start = 0, end = row - 1;

            while (start < end)
            {
                swap(a[i][start], a[i][end]);
                start++;
                end--;
            }
        }
        i++;
    }

    // By Swapping row and column

    // for(int j=0;j<col;j++){ //column swap
    //     int start=0,end=col-1;

    //     while(start<end){
    //         swap(a[start][j],a[end][j]);
    //         start++;
    //         end--;
    //     }
    // }

    // //Row Swap
    // for(int i=0;i<row;i++){
    //     int start=0,end=row-1;

    //     while(start<end){
    //         swap(a[i][start],a[i][end]);
    //         start++;
    //         end--;
    //     }
    // }

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

    RotateBy180Degree(a, 4, 4);
}