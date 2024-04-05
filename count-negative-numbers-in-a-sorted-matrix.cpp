// LINK - https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

// n = no. of rows in grid, m = no of cols in grid

// Solution 1 TC = O(n*m), SC = O(1)
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        for (auto &&vec : grid)
        {
            for (auto &&num : vec)
            {
                if (num < 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

// Solution 2 TC = O(n*m), SC = O(1)
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < cols; col++)
            {
                if (grid[row][col] < 0)
                {
                    count += (rows - row) + (cols - col) - 1;
                    cols--;
                    break;
                }
            }
        }
        return count;
    }
};
