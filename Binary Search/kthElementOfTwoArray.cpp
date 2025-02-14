#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int s = 1;
        int n = arr1.size(), m = arr2.size();
        int i = 0, j = 0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(s==k)
                return arr1[i];
                i++;
            }
            else{
                if(s==k)
                return arr2[j];
                j++;
            }
            s++;
        }
        while(i<n){
            if(s==k)
            return arr1[i];
            i++;
            s++;
        }
        while(j<m){
            if(s==k)
            return arr2[j];
            j++;
            s++;
        }
        return -1;
    }

int main() {
    int k=5;
    vector<int>arr1(5);
    vector<int>arr2(4);

    for(int i=0;i<5;i++) {
        cin>>arr1[i];
    }
    for(int i=0;i<4;i++) {
        cin>>arr2[i];
    }

    cout<<kthElement(k,arr1,arr2);
}