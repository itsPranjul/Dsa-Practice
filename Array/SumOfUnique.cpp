#include <iostream>
#include <algorithm>
using namespace std;

int SumOfUnique(int a[], int n)
{
    int sum = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << SumOfUnique(a, n);
}