class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int tot = 0;
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int count = 0;
                for (int k = 0; k < n; k++)
                {
                    if (grid[i][k] == grid[k][j])
                    {
                        count++;
                    }
                }
                if (count == n)
                {
                    tot++;
                }
            }
        }
        return tot;
    }
};  