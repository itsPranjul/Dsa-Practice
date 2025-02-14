#include<iostream>
#include<vector>
using namespace std;

void productArrayPuzzle(vector<int> a, int n) {
    vector<int> ans(n,1);

    int i=0,j,product=1,count=1;
    for(i;i<n;i++) {
        product*=a[i];
    }
    if(product==0){
        product=1;
    }
    count=product;
    cout<<product<<endl;
    for(j=0;j<n;j++) {
        product/=a[j];
        ans[j]=product;
        product=count;
    }
    for(int k=0;k<n;k++) {
        cout<<ans[k]<<" ";
    }

}

int main() {
    vector<int> arr{1,0};
    int n=2;

    productArrayPuzzle(arr,n);
}
