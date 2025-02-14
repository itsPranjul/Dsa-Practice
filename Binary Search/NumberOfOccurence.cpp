#include<iostream>
using namespace std;

int NumberOfOccurence(int a[], int n, int t) {
    int start=0,end=n-1, last=-1, first=-1, ans,mid;

    while(start<=end) {
        mid=start+(end-start)/2;
        if(a[mid]==t) {
            first=mid;
            end=mid-1;
        }
        else if(a[mid]<t) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    start=0,end=n-1;
    while(start<=end) {
        mid=start+(end-start)/2;
        if(a[mid]==t) {
            last=mid;
            start=mid+1;
        }
        else if(a[mid]<t) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    if(last==-1 || first==-1){
        return 0;
    }
    else
    ans=last-first+1;
    return ans;
}

int main() {
    int k=2;
    int a[1000];
    int n;
    cout<<"Enter element: ";
    cin>>n;
    
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    cout<<NumberOfOccurence(a,n,k);

}