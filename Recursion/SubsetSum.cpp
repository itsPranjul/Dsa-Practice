#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> a, int index,int n, int sum,vector<vector<int>> ans,vector<int> temp) {
    
    if(index==n) {
        ans.push_back(temp);
        cout<<"Sum is: "<<sum<<" ";
        cout<<"Subset is: {";
        for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<"}"<<endl;
        }
        return;
    }

    print(a,index+1,n,sum,ans,temp);
    temp.push_back(a[index]);
    print(a,index+1,n,sum+a[index],ans,temp);
    temp.pop_back();
}

int main() {
    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> a{1,2,3};
    print(a,0,3,0,ans,temp);


}