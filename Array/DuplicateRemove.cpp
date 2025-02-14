#include <iostream>
using namespace std;

int RemoveDuplicate(int a[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[i] != a[j])
        {
            i++;
            a[i] = a[j];
        }
    }
    return i + 1;
}

int main()
{
    int n;
    int a[1000];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << RemoveDuplicate(a, n);
}