#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MissingAndRepeating(vector<int> a, int n) {
    //Time complexity-> O(nlogn)

    
    // int sum=0,count=0,ans;
    // sum=n*(n+1)/2;
    // sort(a.begin(),a.end());

    // for(int i=1;i<n;i++) {
    //     if(a[i-1]==a[i]) {
    //         ans=a[i];
    //     }
    // }
    // cout<<"Repeating number is: "<<ans<<endl;

    // for(int i=0;i<n;i++) {
    //     count+=a[i];
    // }
    // int miss = sum-count+ans;
    // cout<<"Missing number is: "<<miss;

    //Optimal Approach-> O(n)

    vector<int>count(n,0);

    for(int i=0;i<n;i++) {
        count[a[i]-1]++;
    }

    for(int i=0;i<n;i++) {
        if(count[i]==0) {
            cout<<"Missing number is: "<<i+1<<endl;
            break;
        }
    }
    for(int i=0;i<n;i++) {
        if(count[i]==2) {
            cout<<"Repeating number number is: "<<i+1;
            break;
        }
    }
}

int main() {
    int n=6;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    MissingAndRepeating(a,n);
}