#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkPangram(string sen)
{
    vector<int> ans(26, 0);

    for (int i = 0; i < sen.size(); i++)
    {
        ans[sen[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (ans[i] == 0)
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    cin >> s;

    cout << checkPangram(s);
}