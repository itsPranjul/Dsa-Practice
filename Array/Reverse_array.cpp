#include <iostream>
using namespace std;

int main()
{
    int a[5] = {2, 6, 8, 9, 7};
    int start = 0, end = 4;

    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    cout << "After reverse array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}