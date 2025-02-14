#include <iostream>
#include <vector>
using namespace std;

string sortString(string s)
{
    vector<int> ans(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        ans[s[i] - 'a']++;
    }

    string str;
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;

        while (ans[i])
        {
            str += c;
            ans[i]--;
        }
    }
    return str;
}

int main()
{
    string str;
    cin >> str;

    // Sort using selection sort
    //  int index;
    //  for(int i=0;i<str.size();i++) {
    //      index=i;

    //     for(int j=i+1;j<str.size();j++) {
    //         if(str[j]-'a'<str[index]-'a') {
    //             index=j;
    //         }
    //     }
    //     swap(str[index],str[i]);
    // }

    // Sort using Bubble Sort

    // for(int i=str.size()-2;i>=0;i--) {
    //     for(int j=0;j<=i;j++) {
    //         if(str[j]-'a'>str[j+1]-'a')
    //         swap(str[j],str[j+1]);
    //     }
    // }

    // Sort using Insertion Sort

    // for(int i=0;i<str.size();i++) {
    //     for(int j=i;j>0;j--) {
    //         if(str[j]-'a'<str[j-1]-'a')
    //         swap(str[j],str[j-1]);
    //     }
    // }

    cout << sortString(str);
}