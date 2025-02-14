#include <iostream>
#include <vector>
using namespace std;

string sortVowels(string s)
{
    vector<int> upper(26, 0);
    vector<int> lower(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            ans += c;
            upper[i]--;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            ans += c;
            lower[i]--;
        }
    }
    int second = 0, first = 0;

    while (second < ans.size())
    {
        if (s[first] == '#')
        {
            s[first] = ans[second];
            second++;
        }
        first++;
    }
    return s;
}

int main()
{
    string s;
    cin >> s;

    cout << sortVowels(s);
}