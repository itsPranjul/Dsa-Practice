#include <iostream>
using namespace std;

int main()
{
    int n = 13, ans = 0, mul = 1, rem;
    // Octal to decimal
    while (n)
    {
        rem = n % 10;
        n = n / 10;
        ans = ans + rem * mul;
        mul = mul * 8;
    }

    // Decimal to octal
    while (n)
    {
        rem = n % 8;
        n = n / 8;
        ans = ans + rem * mul;
        mul = mul * 10;
    }
    cout << ans;
}