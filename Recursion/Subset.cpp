#include<iostream>
#include<vector>
using namespace std;

void subSet(vector<int> &arr, int index, int n, vector<vector<int>> &ans,vector<int> &temp) {
    if(index==n) {
        ans.push_back(temp);
        return;
    }

    subSet(arr,index+1,n,ans,temp);
    temp.push_back(arr[index]);
    subSet(arr,index+1,n,ans,temp);
    temp.pop_back();
}

int main() {
    vector<int> a{1,2,3};
    vector<vector<int>> ans;
    vector<int> temp;
    subSet(a,0,3,ans,temp);

    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}