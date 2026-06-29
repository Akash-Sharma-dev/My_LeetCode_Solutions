class Solution {
public:
    void isIsland(vector<vector<char>>& grid, int i, int j){
        if(i>=grid.size() || j>=grid[i].size()) return;
        if(grid[i][j] == '1'){
            grid[i][j] = '0';
            isIsland(grid,i+1,j);
            isIsland(grid,i-1,j);
            isIsland(grid,i,j+1);
            isIsland(grid,i,j-1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), count = 0;
        for(int i = 0; i<n; i++){
            int m = grid[i].size();
            for(int j = 0; j<m; j++){
                if(grid[i][j] == '0') continue;
                isIsland(grid,i,j);
                count++;
            }
        }
        return count;
    }
};