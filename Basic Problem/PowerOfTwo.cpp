#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            return 0;
        }

        n = n / 2;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n);
}