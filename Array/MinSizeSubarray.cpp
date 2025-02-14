#include <iostream>
#include <vector>
using namespace std;

int MinimumSizeSubArray(vector<int> arr, int n, int t)
{
    int total = INT32_MAX, start = 0, end = 0, sum = 0;

    while (end < n)
    {
        sum += arr[end];

        while (sum >= t)
        {
            total = min(total, end - start + 1);
            sum -= arr[start++];
        }
        end++;
    }
    return total == INT32_MAX ? 0 : total;
}

int main()
{
    int n = 6;
    int target = 7;
    vector<int> a{2, 3, 1, 2, 4, 3};

    cout << MinimumSizeSubArray(a, n, target);
}