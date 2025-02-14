#include <iostream>
using namespace std;

int main()
{
    int a[6] = {2, 3, 5, 8, 9, 7};
    int x = 7;
    int temp, i = 0;
    while (i <= 5)
    {
        if (a[i] == x)
        {
            temp = i;
            break;
        }
        i++;
    }
    cout << temp;
}