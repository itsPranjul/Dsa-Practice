#include<iostream>
#include<vector>
using namespace std;

void LongestPrefixSum(vector<int> &lps, string s) {
    int n=s.size();
    int prefix=0,suffix=1;

    while(suffix<n) {
        if(s[prefix]==s[suffix]) {
            lps[suffix]=prefix+1;
            prefix++,suffix++;
        }
        else {
            if(prefix==0) {
                lps[suffix]=0;
                suffix++;
            }
            else {
                prefix=lps[prefix-1];
            }
        }
    }
}

int StringMatching(string haystake, string needle) {
    vector<int> lps(needle.size(),0);
    LongestPrefixSum(lps,needle);

    int first=0,second=0;

    while(first<haystake.size()&& second<needle.size()) {
        if(haystake[first]==needle[second]) {
            first++,second++;
        }
        else {
            if(second==0)
            first++;
            else
            second=lps[second-1];
        }
    }
    
    if(second==needle.size())
    return first-second;

    return -1;
}

int main() {
    string str1="abcdaabceaabceaabdop";
    string str2="aabceaabdo";

    cout<<StringMatching(str1,str2);
}