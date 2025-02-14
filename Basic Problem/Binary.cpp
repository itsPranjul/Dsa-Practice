#include <iostream>
using namespace std;
int main()
{
    int num, mul = 1, rem, ans = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 2; // bitwise also use
        num /= 2;      // right shift also use
        ans += rem * mul;
        mul *= 10;
    }
    cout << ans << endl;
}