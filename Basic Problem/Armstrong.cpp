#include <iostream>
#include <cmath>
using namespace std;

bool Armstrong(int n, int digit)
{
    int ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        cout << rem << endl;
        ans = ans + pow(rem, digit);
        cout << ans << endl;
    }
    cout << ans;
    return ans;
}

int count_digit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int main()
{
    int n = 153, rem, x, ans = 0;
    int digit = count_digit(n);
    int num = Armstrong(n, digit);
    if (num == n)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not a armstrong number";
    }
}
