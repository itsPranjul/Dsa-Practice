#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int leftElement(vector<int> arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int m=arr.size()/2;
        cout<<m;
        if(m%2==0)
        return arr[m-1];
        return arr[m];
    }

int main() 
{   vector<int> a{2,7,18,2,5,7,20,9,20,16,4,13,8};
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<leftElement(a);
    return 0;
}