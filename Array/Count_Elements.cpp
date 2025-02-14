#include <iostream>
using namespace std;

int CountElements(int a[], int n, int num1, int num2)
{
    int count = 0, count1 = 0, total;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num1)
            count = i;
        break;
    }
    for (int i = 0; i <= n; i++)
    {
        if (a[i] == num2)
            count1 = i;
    }
    cout << count1 << endl;
    cout << count << endl;

    total = (count1 - count) - 1;
    return total;
}

int main()
{
    // 16 19 3 14 11 7 20 2 17 6 18 11 20 4
    int a[1000];
    int n;
    cin >> n;
    int num1 = 3, num2 = 20;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << CountElements(a, n, num1, num2);
}