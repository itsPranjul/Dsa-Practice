#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &a, int s, int e) {
    int pos=s;

    for(int i=s;i<=e;i++) {
        if(a[i]<=a[e]) {
            swap(a[i],a[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(vector<int> &a, int start,int end) {
    if(start>=end)
    return;

    int pivot=partition(a,start,end);

    quickSort(a,start,pivot-1);
    quickSort(a,pivot+1,end);
}

int main() {
    vector<int> a{5,7,8,9,4,1,2,3};

    quickSort(a,0,a.size()-1);

    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
}