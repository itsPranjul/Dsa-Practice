#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    int start=0, end=n-1, sum1=0,sum2=end;

    while(start<end) {
        if(a[start]<a[end]  sum2>sum1) {
            sum1+=a[start];
            start++;
        }
        else {
            end--;
            sum2+=a[end];
        }
    }
    if(sum1==sum2)
    cout<<"True";
    else
    cout<<"False";
}