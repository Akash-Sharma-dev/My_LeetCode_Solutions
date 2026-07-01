class Solution {
public:
    void isIsland(vector<vector<int>>& grid, int i, int j, int& count) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size()) {
            return;
        }
        if (grid[i][j] == 1) {
            count++;
            grid[i][j] = 0;
            isIsland(grid, i + 1, j, count);
            isIsland(grid, i - 1, j, count);
            isIsland(grid, i, j - 1, count);
            isIsland(grid, i, j + 1, count);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), count = 0;
        int x = 1;
        for (int i = 0; i < n; i++) {
            if(m>1)
            x = m - 1;
            if (i == 0 || i == n - 1) {
                x = 1;
            }
            for (int j = 0; j < m; j += x) {
                if (grid[i][j] == 0)
                    continue;
                isIsland(grid, i, j, count);
            }
        }
        count = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (grid[i][j] == 0)
                    continue;
                isIsland(grid, i, j, count);
            }
        }
        return count;
    }
};