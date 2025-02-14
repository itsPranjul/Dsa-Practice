#include<iostream>
using namespace std;

int FirstAndLastPosition(int arr[], int n, int key) {
    int start=0,end=n-1,first=-1,last=-1,mid;

    while(start<=end) {
        mid= start+(end-start/2);

        if(arr[mid]==key) {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<key) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    
    start=0,end=n-1;
    while(start<=end) {
        mid= start+(end-start/2);

        if(arr[mid]==key) {
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<key) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }

    int a[2];
    a[0]=first;
    a[1]=last;
    cout<<"[";
    for(int i=0;i<2;i++) {
        cout<<a[i]<<",";
    }
    cout<<"]";

}

int main() {
    int target=3;
    int a[10000];
    int n;
    cout<<"Enter a element: ";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    FirstAndLastPosition(a,n,target);
}