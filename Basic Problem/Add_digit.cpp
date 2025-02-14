#include <iostream>
using namespace std;

int main()
{
    int n = 321654, ans;

    while (n > 9)
    {
        ans = 0;
        int rem;

        while (n != 0)
        {
            rem = n % 10;
            n = n / 10;
            ans += rem;
        }
        n = ans;
    }
    cout << ans;
}