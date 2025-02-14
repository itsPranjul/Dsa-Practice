#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a, int start,int mid, int end) {
    vector<int> temp(end-start+1);
    int left=start,right=mid+1,index=0;

    while(left<=mid && right<=end) {
        if(a[left]<=a[right]) {
            temp[index]=a[left];
            left++;
            index++;
        }
        else {
            temp[index]=a[right];
            right++;
            index++;
        }
    }

    while(left<=mid) {
        temp[index]=a[left];
        left++;
        index++;
    }

    while(right<=end) {
        temp[index]=a[right];
        right++;
        index++;
    }
    
    index=0;
    while(start<=end) {
        a[start]=temp[index];
        start++;
        index++;
    }
}

void mergeSort(vector<int> &arr, int start, int end) {
    if(start==end)
    return;
    int mid=start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main() {
   vector<int> a{7,10,4,20,15};
   int n=a.size();
   int k=4;
   mergeSort(a,0,n-1);

   for(int i=0;i<a.size();i++) {
    cout<<a[i]<<" ";
   }

   cout<<"Kth maximum is: "<<a[k-1];
   
}