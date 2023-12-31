// LINK - https://leetcode.com/problems/number-of-good-pairs/

// TC = O(n^2), SC = O(1)

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count = 0, n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
