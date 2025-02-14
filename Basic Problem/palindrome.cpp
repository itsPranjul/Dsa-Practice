#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, rem, x = 0, ans1 = 0, rem1, mul = 1;
    ;
    cout << "Enter a number: ";
    cin >> n;
    x = n;
    while (x)
    {
        rem1 = n % 2;
        rem1 = n / 2;
        ans1 = ans1 + rem1 * mul;
        mul = mul * 10;
    }
    cout << ans1;

    // while(x) {
    //     rem=x%10;
    //     x=x/10;
    //     ans=ans*10+rem;
    // }
    // //cout<<ans;
    // if(ans==n) {
    //     cout<<"Palindrome";
    // }
    // else {
    //     cout<<"Not a Palindrome";
    // }
}