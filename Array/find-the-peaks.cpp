// LINK - https://leetcode.com/problems/find-the-peaks/description/

// n = size of mountain

// Solution 1 TC = O(n), SC = O(n)
class Solution
{
public:
    vector<int> findPeaks(vector<int> &mountain)
    {
        vector<int> ans;
        for (int i = 1; i < mountain.size() - 1; i++)
        {
            if (mountain[i] > mountain[i - 1] &&
                mountain[i] > mountain[i + 1])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// TC = O(n), SC = O(n)
// Solution 2
class Solution
{
public:
    vector<int> findPeaks(vector<int> &mountain)
    {
        vector<int> ans;
        int ind = 1;
        while (ind < mountain.size() - 1)
        {

            if (mountain[ind] > mountain[ind - 1] &&
                mountain[ind] > mountain[ind + 1])
            {
                ans.push_back(ind);
                ind += 2;
            }
            else
            {
                ind++;
            }
        }
        return ans;
    }
};