#include <iostream>
using namespace std;

bool DivideArrayInTwoSubArray(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int sum1 = 0, sum2 = 0;

        for (int j = 0; j <= i; j++)
            sum1 += a[j];

        for (int j = i + 1; j < n; j++)
            sum2 += a[j];

        if (sum1 == sum2)
            return 1;
    }
    return 0;
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

    cout << DivideArrayInTwoSubArray(a, n);
}