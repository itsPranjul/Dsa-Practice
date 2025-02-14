#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySumDivide(vector<int> arr, int n, int k)
{
    int total = 0, prefixSum = 0, rem;
    unordered_map<int, int> m;
    m[0] = 1;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        rem = prefixSum % k;

        if (rem < 0)
            rem += k;
        if (m.count(rem))
        {
            total += m[rem];
            m[rem]++;
        }
        else
        {
            m[rem]++;
        }
    }
    return total;
}

int main()
{
    int k = 5;
    int n = 6;
    vector<int> a{4, 5, 0, -2, -3, 1};

    cout << subarraySumDivide(a, n, k);
}