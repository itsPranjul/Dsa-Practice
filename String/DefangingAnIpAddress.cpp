#include <iostream>
#include <string>
using namespace std;

string DefangingIPAddress(string str)
{
    string ans;
    int index = 0;
    while (index < str.size())
    {
        if (str[index] == '.')
            ans += "[.]";
        else
            ans += str[index];

        index++;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout << DefangingIPAddress(s);
}