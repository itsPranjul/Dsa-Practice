#include<iostream>
using namespace std;

int Sqrt(int n) {
    int start=0,end=n,mid,ans;

    while(start<=end) {
        mid= start+ (end-start)/2;

        if(mid==n/mid) {
            ans=mid;
            break;
        }
        else if(mid<n/mid) {
            ans=mid;
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    return ans;
}

int main() {
    int target=49;
    int n;
    cout<<"Enter element: ";
    cin>>n;


    cout<<Sqrt(n);
}