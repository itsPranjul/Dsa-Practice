#include<iostream>
#include<algorithm>
using namespace std;

int SpecialArrayX(int a[], int n) {
    sort(a.begin(), a.end());

    int start=0;
    int end=n-1;

    while(start<=end) {
        int mid=start+(end-start)/2;
        int ans=count(a,mid);
        cout<<ans;
    }
}

int main() {
    int n;
    cin>>n;
    int a[1000];

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    cout<<SpecialArrayX(a,n);


}