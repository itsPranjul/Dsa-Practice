#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorial(int n)
{
    vector<int> ans(1, 1);
    int carry = 0, res, size = ans.size();
    while (n > 1)
    {
        for (int i = 0; i < size; i++)
        {
            res = ans[i] * n + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        n--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n = 8;

    cout << factorial(n);
}