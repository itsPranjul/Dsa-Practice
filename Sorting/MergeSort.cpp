//---------------------------MERGE SORT---------------------------------------//


#include<iostream>
#include<vector>
using namespace std;

//Increasing order (Ascending)
// void merge(vector<int> &a, int start,int mid, int end) {
//     vector<int> temp(end-start+1);
//     int left=start,right=mid+1,index=0;

//     while(left<=mid && right<=end) {
//         if(a[left]<=a[right]) {
//             temp[index++]=a[left++];
//         }
//         else {
//             temp[index++]=a[right++];
//         }
//     }

//     while(left<=mid) {
//         temp[index++]=a[left++];
//     }

//     while(right<=end) {
//         temp[index++]=a[right++];
//     }
    
//     index=0;
//     while(start<=end) {
//         a[start++]=temp[index++];
//     }
// }

//Decreasing Order (Descending Order)

void merge(vector<int> &a, int start,int mid, int end) {
    vector<int> temp(end-start+1);
    int left=start,right=mid+1,index=0;

    while(left<=mid && right<=end) {
        if(a[left]>=a[right]) {
            temp[index++]=a[left++];
        }
        else {
            temp[index++]=a[right++];
        }
    }

    while(left<=mid) {
        temp[index++]=a[left++];
    }

    while(right<=end) {
        temp[index++]=a[right++];
    }
    
    index=0;
    while(start<=end) {
        a[start++]=temp[index++];
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

//TIME COMPLEXITY:- O(NLOGN)
//SPACE COMPLEXITY:- O(N)
int main() {
    vector<int> a{8,9,7,2,1,3,6};

   mergeSort(a,0,6);

   for(int i=0;i<a.size();i++) {
    cout<<a[i]<<" ";
   }
}