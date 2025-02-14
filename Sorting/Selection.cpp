#include <iostream>
using namespace std;

int main()
{
    int a[6] = {5, 4, 3, 2, 1, 7};
    int index;

    for (int i = 0; i < 5; i++)
    { // n-1
        index = i;

        for (int j = i + 1; j < 6; j++)
        { // n
            if (a[j] < a[index])
            {
                index = j;
            }
        }
        swap(a[index], a[i]);
    }
    cout << "After apply Selection sort: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    // int a[5] = {10,4,3,2,8};
    // int index,j;

    // for(int i=0;i<4;i++) {
    //     index=i;

    //     for(j=5;j>=1;j--) {
    //         if(a[j]< a[index]) {
    //             index=j;
    //         }
    //     }
    //     swap(a[index],a[j]);
    // }
    // for(int i=0;i<6;i++) {
    //     cout<<a[i]<<" ";
    // }
}