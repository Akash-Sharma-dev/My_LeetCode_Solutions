class Solution {
public:

    void isIsland(vector<vector<int>> &grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()){
            return;
        }
        if(grid[i][j] == 0){
            grid[i][j] = 1;
            isIsland(grid,i-1,j);
            isIsland(grid,i+1,j);
            isIsland(grid,i,j-1);
            isIsland(grid,i,j+1);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size(), count = 0;
        int x;
        for(int i = 0; i<n; i++){
            x = m-1;
            if(i == 0 || i == n-1){
                x = 1;
            }
            for(int j = 0; j<m; j+=x){
                if(grid[i][j] == 1) continue;
                isIsland(grid,i,j);
            }
        }
        for(int i = 1; i<n; i++){
            for(int j = 1; j<m; j++){
                if(grid[i][j] == 1) continue;
                isIsland(grid,i,j);
                count++;
            }
        }
        return count;
    }
};