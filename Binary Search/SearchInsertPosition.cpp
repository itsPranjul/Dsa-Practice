#include<iostream>
using namespace std;

int SearchInsertPosition(int a[], int n, int key) {
    int start=0,end=n-1,mid,index=n;

    while(start<=end) {
        mid=start+(end-start)/2;
        if(a[mid]==key) {
            index=mid;
            break;//return mid
        }
        else if(a[mid]<key) {
            start=mid+1;
        }
        else {
            index=mid;
            end=mid-1;
        }
    }
    return index;
}

int main() {
    int a[10000];
    int target=5;
    int n;
    cout<<"Enter a element: ";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    cout<<SearchInsertPosition(a,n,target);
}