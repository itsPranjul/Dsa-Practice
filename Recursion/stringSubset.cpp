#include<iostream>
#include<vector>
using namespace std;

void subSet(string s, int index, int n, vector<string> &ans,string temp) {
    if(index==n) {
        ans.push_back(temp);
        return;
    }

    subSet(s,index+1,n,ans,temp);
    temp.push_back(s[index]);
    subSet(s,index+1,n,ans,temp);
    temp.pop_back();
}

int main() {
    string s="abc";
    vector<string> ans;
    string temp;
    subSet(s,0,3,ans,temp);

    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}