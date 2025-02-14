#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector<int> arr, int n)
{
    // Using Moore voting algorithm

    int candidate, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            candidate = arr[i];
        }
        else
        {
            if (candidate == arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
            count++;
    }
    if (count > n / 2)
        return candidate;
    else
        return -1;
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

    cout << MajorityElement(a, n);
}