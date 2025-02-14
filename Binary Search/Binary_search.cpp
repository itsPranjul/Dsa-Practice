#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key) {
    int mid,start=0,end=n-1;

    while(start<=end) {
        mid=start+(end-start/2);
        if(arr[mid]==key) {
            return mid;
        }
        else if(arr[mid]<key) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    } 
    return -1;
}

int main(){
    int key=6;
    int a[10000];
    int n;
    cout<<"Enter a array elements: ";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    cout<<BinarySearch(a,n,key);
    return 0;
    
}