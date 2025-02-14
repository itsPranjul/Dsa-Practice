#include <iostream>
#include <vector>
using namespace std;

int PairDifference(vector<int> arr, int n, int t)
{
    int start = 0, end = 1;

    while (end < n)
    {
        if (arr[start] * arr[end] == t)
        {
            return 1;
        }
        else
        {
            if (start == end)
            {
                end++;
            }
            else if (arr[start] * arr[end] < t)
            {
                end++;
            }
            else
            {
                start++;
            }
        }
    }
    return 0;
}

int main()
{
    int t = 27;
    vector<int> a{8, 8, 7, 1, 8, 9, 4, 3, 3, 1};
    int n = a.size();

    cout << PairDifference(a, n, t);
}