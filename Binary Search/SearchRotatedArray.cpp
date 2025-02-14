#include<iostream>
using namespace std;

int SearchRotate(int a[], int n, int target) {
    int start=0,end=n-1,ans=-1,mid;

    while(start<=end) {
        mid=start+(end-start)/2;

        if(a[mid]==target)
        return mid;

        else if(a[mid]>=a[0]) {
            if(a[start]<=target && a[mid]>target)
            end=mid-1;
            else
            start=mid+1;
        }
        else {
            if(a[mid]<target && a[end]>=target) 
            start=mid+1;
            else
            end=mid-1;
        }
    }
    return -1;
}

int main() {
    int target=0;
    int a[1000];
    int n;
    cout<<"Enter a element: ";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<SearchRotate(a,n,target);

}