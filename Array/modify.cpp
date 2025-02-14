#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a={0,2,2,2,0,6,6,0,0,8};
    int n=a.size();
    vector<int> ans(n);
    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]){
            a[i-1]=a[i-1]*2;
            a[i]=0;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
        swap(a[i],a[count]);
        count++;
    }}
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
