#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaxDiffBetTwoElement(vector<int> arr, int n)
{
    int maxi = INT32_MIN, ans = 0;

    // for(int i=0;i<n;i++) {

    //     for(int j=i+1;j<n;j++) {
    //         maxi=max(maxi,arr[j]-arr[i]);
    //     }
    // }

    // suffix sum
    int suffix = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (suffix < arr[i])
        {
            suffix = arr[i];
        }
        ans = max(suffix - arr[i], ans);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << MaxDiffBetTwoElement(a, n);
}