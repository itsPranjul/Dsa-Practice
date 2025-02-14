#include <iostream>
using namespace std;

int OccurrenceNum(int a[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[1000];
    int k = 2;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << OccurrenceNum(a, n, k);
}