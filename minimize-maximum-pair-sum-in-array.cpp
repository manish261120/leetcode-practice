// LINK - https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/

// n = size of nums

// Solution 1 TC = O(nlogn), SC = O(1)
class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        int n = nums.size(), ans = INT16_MIN;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, nums[i] + nums[n - i - 1]);
        }
        return ans;
    }
};

// TC = O(nlogn), SC = O(1)
// Solution 2
class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        int n = nums.size(), ans = INT16_MIN;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n / 2; i++)
        {
            ans = max(ans, nums[i] + nums[n - i - 1]);
        }
        return ans;
    }
};