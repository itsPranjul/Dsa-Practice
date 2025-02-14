#include <iostream>
using namespace std;

// Brute Force Approach

// void MarkRow(int a[][3], int row,int col,int i) {
//     for(int j=0;j<col;j++) {
//         if(a[i][j]!=0){
//             a[i][j]=-1;
//         }
//     }
// }

// void MarkCol(int a[][3], int row,int col,int j) {
//     for(int i=0;i<row;i++) {
//         if(a[i][j]!=0){
//             a[i][j]=-1;
//         }
//     }
// }

// void SetMatrixZero(int a[][3], int row, int col) {
//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             if(a[i][j]==0){
//                 MarkRow(a,row,col,i);
//                 MarkCol(a,row,col,j);
//             }
//         }
//     }

//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             if(a[i][j]==-1)
//             a[i][j]=0;
//         }
//     }

//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Better Approach

void SetMatrixZero(int a[][3], int row, int col)
{

    int rowMat[row] = {0};
    int colMat[col] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                rowMat[i] = 1;

                colMat[j] = 1;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (rowMat[i] || colMat[j])
            {
                a[i][j] = 0;
            }
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
    int row = 3, col = 3;
    int a[3][3];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    SetMatrixZero(a, row, col);
}