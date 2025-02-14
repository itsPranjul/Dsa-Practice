#include<iostream>
using namespace std;

int RotatedArray(int a[], int n) {
    int start=0,end=n-1,mid,ans=a[0];

    while(start<=end) {
        mid=start+(end-start)/2;

        if(a[mid]>a[0]) {
            start=mid+1;
        }
        else {
            ans=a[mid];
            end=mid-1;
        }
    }
    return ans;
}

int main() {
    int a[1000];
    int size;
    cout<<"Enter a size: ";
    cin>>size;
    cout<<"Enter a element: ";
    for(int i=0;i<size;i++) {
        cin>>a[i];
    }
    cout<<RotatedArray(a,size);
}