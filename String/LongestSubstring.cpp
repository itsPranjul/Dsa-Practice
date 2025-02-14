//---------------------------SLIDING WINDOW PROTOCOL----------------------------//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lengthOfSubstringString(string s)
{
    vector<int> count(256, 0);
    int first = 0, second = 0, len = 0;

    while (second < s.size())
    {  
        while (count[s[second]])
        {    
            count[s[first]] = 0;
            first++;
        }

        count[s[second]] = 1;
        len = max(len, second - first + 1);
        second++;
    }
    return len;
}

int main()
{
    string str;
    cin >> str;

    cout << lengthOfSubstringString(str);
}