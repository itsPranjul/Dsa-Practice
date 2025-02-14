#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool PrefixSum(vector<int> a, int n)
{

    int maxi = INT32_MIN, prefix = 0, total_sum = 0;

    for (int i = 0; i < n; i++)
        total_sum += a[i];

    for (int i = 0; i < n - 1; i++)
    {
        prefix += a[i];
        int ans = total_sum - prefix;
        if (ans == prefix)
            return 1;
    }
    return 0;
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

    cout << PrefixSum(a, n);
}