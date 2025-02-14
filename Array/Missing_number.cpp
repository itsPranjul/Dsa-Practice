#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int total;
    int a[5] = {5, 4, 6, 1, 3};
    int sum = 0;
    int ans;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    total = n * (n + 1) / 2;
    ans = total - sum;
    cout << ans;
}