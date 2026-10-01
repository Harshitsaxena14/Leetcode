class Solution {
public:

    int dfs(vector<vector<int>>& grid, int r, int c, int remaining) {

        if (r < 0 || c < 0 ||
            r >= grid.size() || c >= grid[0].size() ||
            grid[r][c] == -1) {
            return 0;
        }

        if (grid[r][c] == 2) {
            return remaining == 1 ? 1 : 0;
        }

        int temp = grid[r][c];
        grid[r][c] = -1;

        int ans = 0;

        ans += dfs(grid, r + 1, c, remaining - 1);
        ans += dfs(grid, r - 1, c, remaining - 1);
        ans += dfs(grid, r, c + 1, remaining - 1);
        ans += dfs(grid, r, c - 1, remaining - 1);

        grid[r][c] = temp;

        return ans;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {

        int sr = 0, sc = 0;
        int remaining = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != -1)
                    remaining++;
                if (grid[i][j] == 1) {
                    sr = i;
                    sc = j;
                }
            }
        }
        return dfs(grid, sr, sc, remaining);
    }
};