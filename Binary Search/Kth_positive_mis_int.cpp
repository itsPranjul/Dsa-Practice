#include<iostream>
using namespace std;

int MissingNumber(int a[], int n, int k){
    int start=0,end=n-1,mid,first=-1,last=-1,ans=n;

    while(start<=end) {
        mid = start+(end-start)/2;

        if(a[mid]-mid-1>=k) {
            ans=mid;
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return ans+k;
}

int main() {
    int target=1;
    int n;
    int a[10000];
    cout<<"Enter a element: ";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<MissingNumber(a,n,target);
}