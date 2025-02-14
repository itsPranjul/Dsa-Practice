#include <iostream>
using namespace std;

int main()
{
    int a[5] = {4, 5, 8, 3, 9};
    // MAXIMUM NUMBER
    int max = INT32_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Maximum number is: " << max << endl;

    // MINIMUM NUMBER
    int min = INT32_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "Minimum number is: " << min;
}