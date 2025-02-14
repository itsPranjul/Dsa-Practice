#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int TrappingRainWater(vector<int> height, int n)
{

    // 1st Bruteforce approach
    int water = 0, minHeight;
    for (int i = 1; i < n - 1; i++)
    {
        int leftMax = 0, rightMax = 0;

        for (int j = 0; j < i; j++)
        {
            leftMax = max(leftMax, height[j]);
        }
        for (int j = i + 1; j < n; j++)
        {
            rightMax = max(rightMax, height[j]);
        }
        minHeight = min(leftMax, rightMax);
        if (minHeight - height[i] >= 0)
        {
            water += minHeight - height[i];
        }
    }
    return water;

    // 2nd approach (Takes O(n) times for both time and space)
    vector<int> leftMax(n);
    vector<int> rightMax(n);
    int minHeight;
    int water = 0;

    leftMax[0] = 0;
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);

    rightMax[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);

    for (int i = 0; i < n; i++)
    {
        minHeight = min(leftMax[i], rightMax[i]);
        if (minHeight - height[i] >= 0)
            water += minHeight - height[i];
    }
    return water;

    // 3rd approach (Optimal approach)

    int maxLeft = 0, maxRight = 0, water = 0;

    int maxHeight = height[0], index = 0;

    for (int i = 1; i < n; i++)
    {
        if (height[i] > maxHeight)
        {
            maxHeight = height[i];
            index = i;
        }
    }
    for (int i = 0; i < index; i++)
    {
        if (maxLeft > height[i])
        {
            water += maxLeft - height[i];
        }
        else
        {
            maxLeft = height[i];
        }
    }

    for (int i = n - 1; i > index; i--)
    {
        if (maxRight > height[i])
        {
            water += maxRight - height[i];
        }
        else
        {
            maxRight = height[i];
        }
    }
    return water;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << TrappingRainWater(a, n);
}
