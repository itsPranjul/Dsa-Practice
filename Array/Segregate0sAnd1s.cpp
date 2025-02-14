#include <iostream>
using namespace std;

void Segregate0sAnd1s(int a[], int n)
{
    int start = 0, end = n - 1;

    // while(start<end) {
    //     if(a[start]==0) {
    //         start++;
    //     }
    //     else {
    //         if(a[end]==0) {
    //             swap(a[start],a[end]);
    //             start++;
    //             end--;
    //         }
    //         else{
    //             end--;
    //         }
    //     }
    // }

    // 2nd Method

    int count0 = 0, count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            count0++;
        else
            count1++;
    }

    for (int i = 0; i < count0; i++)
    {
        a[i] = 0;
    }
    for (int i = count0; i < n; i++)
    {
        a[i] = 1;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[1000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    Segregate0sAnd1s(a, n);
}