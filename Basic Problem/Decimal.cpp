#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, mul = 1, rem;
    cout << "Enter a binary number: ";
    cin >> n;

    while (n)
    {
        rem = n % 10;
        n = n / 10;
        ans += rem * mul;
        mul *= 2;
    }
    cout << ans;
}