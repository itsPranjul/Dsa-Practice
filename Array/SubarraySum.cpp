#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int> arr, int n, int k)
{
    int total = 0, prefixSum = 0, co = 0;
    unordered_map<int, int> m;
    m[0] = 1;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (m.count(prefixSum - k))
        {
            total += m[prefixSum - k];
            m[prefixSum]++;
        }
        else
        {
            m[prefixSum]++;
        }
    }
    return total;
}

int main()
{
    int k = 15;
    int n = 4;
    vector<int> a{10, 5, 2, 7, 1, 9};

    cout << subarraySum(a, n, k);
}