#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int ThreeSum(vector<int> a, int n, int x)
{
    // 1st Brute Force approach [O(n^3)]
    //  for(int i=0;i<n-2;i++) {
    //      for(int j=1;j<n-1;j++) {
    //          for(int k=2;k<n;k++) {
    //              if(a[i]+a[j]+a[k]==x) {
    //                  return 1;
    //              }
    //          }
    //      }
    //  }
    //  return 0;

    // 2nd BinarySearch approach [O(n^2logn)]
    //  int find,start,end,mid;
    //   for(int i=0;i<n-2;i++) {
    //      for(int j=1;j<n;j++) {
    //          find = x-a[i]-a[j];
    //          start=j+1,end=n-1;

    //         while(start<=end) {
    //             mid=(start+end)/2;

    //             if(a[mid]==find) {
    //                 return 1;
    //             }
    //             else if(a[mid]<find) {
    //                 end=mid-1;
    //             }
    //             else {
    //                 start=mid+1;
    //             }
    //         }
    //     }
    // }
    // return 0;

    // 3rd Optimal Approach [O(n^2)]
    int ans, start, end;
    for (int i = 0; i < n - 2; i++)
    {
        ans = x - a[i];

        start = i + 1;
        end = n - 1;

        while (start < end)
        {
            if (a[start] + a[end] == ans)
            {
                return 1;
            }
            else if (a[start] + a[end] > ans)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int x = 13;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << ThreeSum(a, n, x);
}