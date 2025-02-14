#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int zeroSum(vector<int> arr, int n)
{
    int total = 0;
    int prefixSum = 0;
    unordered_map<int, int> m;
    m[0] = 1;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (m.count(prefixSum))
        {

            total += m[prefixSum];
            m[prefixSum]++;
        }
        else
        {

            m[prefixSum] = 1;
        }
    }

    return total;
}

int main()
{
    int n = 11;
    vector<int> a{0, -9, 6, -5, 0, 0, 8, 0, 0, 3, -3};
    cout << zeroSum(a, n);
}