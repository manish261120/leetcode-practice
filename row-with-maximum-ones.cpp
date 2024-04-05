// LINK - https://leetcode.com/problems/row-with-maximum-ones/description/

// n = size of mat, m = size of mat[i]

// Solution 1 TC = O(n*m), SC = O(1)
class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        vector<int> ans(2, 0);
        int c = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            int rc = count(mat[i].begin(), mat[i].end(), 1);
            if (rc > ans[1])
            {
                ans[0] = i;
                ans[1] = rc;
            }
        }
        return ans;
    }
};