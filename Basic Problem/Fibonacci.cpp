#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int curr;
    int prev = 1;
    int last = 0;

    if (n == 0)
    {
        cout << last;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            curr = prev + last;
            last = prev;
            prev = curr;
        }
        cout << curr;
    }
}