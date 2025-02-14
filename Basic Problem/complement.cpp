#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, rem, mul = 1, ans2 = 0;
    cout << "Entera number: ";
    cin >> n;

    while (n)
    {
        rem = n % 2;
        // rem=rem^1;
        n = n / 2;
        if (rem == 0)
            rem = 1;
        else
        {
            rem = 0;
        }
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    cout << ans;
}