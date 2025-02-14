#include <iostream>
#include <cstring>
using namespace std;

void MoveNegative(int a[], int n)
{
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            arr[count] = a[i];
            count++;
        }
    }
    if (count == n || count == 0)
        return;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            arr[count] = a[i];
        count++;
    }

    memcpy(a, arr, sizeof(arr));
}

int main()
{
    int a[1000];
    int n;
    cout << "Enter the size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    MoveNegative(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}