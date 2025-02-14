#include<iostream>
using namespace std;

int CountZero(int a[], int n) {
    int start=0, end=n-1, mid, first=-1,last=-1,count=0;

    while(start<=end) {
        mid=start+(end-start)/2;
        if(mid==0 || a[mid-1]==1 && a[mid]==0) {
            count++;
            start=mid+1;
        }
        else {
            start=mid+1;
        }
    }
    start=0,end=n-1;
    while(start<=end) {
        if(a[mid]==0) {
            count++;
            end=mid-1;
        }
        else {
            end=mid-1;
        }
    }
    return count;
}

int main() {
    int n;
    int a[1000];
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    cout<<CountZero(a,n);
}