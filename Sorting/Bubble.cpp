#include <iostream>
using namespace std;
int main()
{
    int a[6] = {5, 6, 9, 7, 2, 1};

    // Increasing Order
    for (int i = 4; i >= 0; i--)
    { // i=n-2;

        for (int j = 0; j <= i; j++)
        {

            if (a[j] > a[j + 1])
            {

                swap(a[j], a[j + 1]);
            }
        }
    }
    // Decreasing Order
    // for(int i=4; i>=0; i--) {//i=n-2;

    //     for(int j=0; j<=i; j++) {

    //         if(a[j] < a[j+1]) {

    //             swap(a[j], a[j+1]);
    //         }
    //     }
    // }

    // Increasing Order but bubbling start from last index
    // for(int i=4; i>=0; i--) {//i=n-2;

    //     for(int j=n;j>=1; j--) {

    //         if(a[j]> a[j-1]) {

    //             swap(a[j], a[j-1]);
    //         }
    //     }
    // }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}