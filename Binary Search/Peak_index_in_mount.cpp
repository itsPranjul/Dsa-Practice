#include<iostream>
using namespace std;

int PeakIndex(int a[], int n) {
    int start=0,end=n-1,mid;

    while(start<=end) {
        mid=start+(end-start)/2;

        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]) {
            return mid;
        }
        else if(a[mid]>a[mid-1]) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
}

int main() {
    int a[10000];
    int n;
    cout<<"Enter a size: "<<endl;
    cin>>n;
    cout<<"Enter element: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    cout<<PeakIndex(a,n);
}