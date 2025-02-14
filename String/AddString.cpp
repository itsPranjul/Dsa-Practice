#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string addString(string n1, string n2)
{
    int index1 = n1.size() - 1;
    int index2 = n2.size() - 1;
    int sum, carry = 0;
    string ans;

    while (index2 >= 0)
    {
        sum = (n1[index1] - '0') + (n2[index2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--, index2--;
    }

    while (index1 >= 0)
    {
        sum = (n1[index1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
    }
    if (carry)
    {
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string num1, num2;
    cin >> num1;
    cin >> num2;

    cout << addString(num1, num2);
}
