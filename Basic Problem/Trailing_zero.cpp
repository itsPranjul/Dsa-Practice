#include<iostream>
using namespace std;

int trailing_zero(int n) {
    int count=0;

    while(n>=5) {
        count+=n/5;
        n/=5;
    }
    return count;
}

int main() {
    int n,fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    
    
    while(n) {
        fact=fact*n;
        n--;
    }
    cout<<trailing_zero(fact);
}