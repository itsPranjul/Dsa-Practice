#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;

    int start = 0, end = nums.size() - 1;

    while (start < end)
    {
        if (nums[start] + nums[end] == target)
        {
            ans.push_back(start + 1);
            ans.push_back(end + 1);
            return ans;
        }
        else if (nums[start] + nums[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return ans;
}

int main()
{
    int target1 = 9;
    vector<int> arr{2, 7, 11, 15};

    vector<int> result1 = twoSum(arr, target1);
    cout << "Output: [" << result1[0] << ", " << result1[1] << "]" << endl;
}