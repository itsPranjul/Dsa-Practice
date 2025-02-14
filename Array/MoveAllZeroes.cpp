#include <iostream>
using namespace std;

void MoveAllZeroes(int a[], int n)
{
    int i = 0, j = 0;

    while (i < n)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[1000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    MoveAllZeroes(a, n);
}