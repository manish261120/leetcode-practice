// LINK - https://leetcode.com/problems/richest-customer-wealth/

// TC = O(m*n), SC = O(m)

// solution 1
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        vector<int> arr;
        for (int i = 0; i < accounts.size(); i++)
        {
            int wealth = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                wealth += accounts[i][j];
            }
            arr.push_back(wealth);
        }
        return *max_element(arr.begin(), arr.end());
    }
};

// TC = O(m*n), SC = O(1)

// solution 2
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max_wealth = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int wealth = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                wealth += accounts[i][j];
            }
            max_wealth = max(max_wealth, wealth);
        }
        return max_wealth;
    }
};