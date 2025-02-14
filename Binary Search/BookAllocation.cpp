#include<iostream>
using namespace std;

int BookAllocation(int a[], int n, int m) {
    if(m>n)
    return -1;

    int start=0,end=0,mid,ans;
    
    for(int i=0;i<n;i++) {
        start=max(start,a[i]);
        end+=a[i];
    }

    while(start<=end) {
        int pages=0, count=1;
        mid=start+(end-start)/2;

        for(int i=0;i<n;i++) {
            pages+=a[i];
            if(pages>mid) {
                count++;
                pages=a[i];            
            }
        }

        if(count<=m) {
        ans=mid;
        end=mid-1;
    }
    else 
    start=mid+1;
    }
    return ans;

}

int main() {
    int a[1000];
    int m=2;
    int n; 
    cout<<"Enter a size :";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    cout<<BookAllocation(a,n,m);
}