#include <iostream>
using namespace std;

int main()
{
    int n = 200, ans = 0, rem;

    while (n)
    {
        rem = n % 10; // last digit
        n = n / 10;
        ans = ans * 10 + rem;
    }
    cout << ans;
}