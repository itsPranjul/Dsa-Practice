#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LargestSumContiguous(vector<int> arr, int n)
{
    int maxi = INT32_MIN, prefix;

    for (int i = 0; i < n; i++)
    {
        prefix = 0;

        for (int j = i; j < n; j++)
        {
            prefix += arr[j];
            maxi = max(maxi, prefix);
        }
    }
    return maxi;
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
    cout << LargestSumContiguous(a, n);
}