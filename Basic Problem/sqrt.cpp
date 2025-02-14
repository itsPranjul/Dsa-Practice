#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;

    while (i * i < n)
    {
        i++;
    }
    cout << i;
}