#include <iostream>
using namespace std;

int main()
{
    int a[6] = {4, 5, 6, 9, 10, 7};
    int maxi = INT16_MIN;
    int sec_max;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > maxi)
        {
            maxi = a[i];
        }
    }
    cout << "Maximum is: " << maxi << endl;
    sec_max = INT16_MIN;
    for (int i = 0; i < 6; i++)
        if (maxi != a[i])
        {
            if (a[i] > sec_max)
            {
                sec_max = a[i];
            }
        }
    cout << "Second Maximum: " << sec_max;
}