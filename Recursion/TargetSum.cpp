#include<iostream>
#include<vector>
using namespace std;

bool find(vector<int> a, int index,int n,int target) {
    
    if(target==0) 
    return 1;
    if(index==n || target<0)
    return 0;

    return find(a,index+1,n,target)||find(a,index+1,n,target-a[index]);
}

int main() {
    int target=4;
    vector<int> a{1,2,3};
    cout<<find(a,0,3,target);
}