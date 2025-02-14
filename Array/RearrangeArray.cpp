#include <iostream>
#include <vector>
using namespace std;

void ReaarangeArray(vector<int> arr, int n)
{
    // Brute Force
    //  vector<int> pos;
    //  vector<int>neg;

    // for(int i=0;i<n;i++) {
    //     if(arr[i]>0)
    //     pos.push_back(arr[i]);
    //     else
    //     neg.push_back(arr[i]);
    // }

    // for(int i=0;i<n/2;i++) {
    //     arr[2*i] = pos[i];
    //     arr[2*i+1] = neg[i];
    // }
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";

    // Optimal Approach

    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
        else
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}

int main()
{
    int n = 6;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ReaarangeArray(a, n);
}