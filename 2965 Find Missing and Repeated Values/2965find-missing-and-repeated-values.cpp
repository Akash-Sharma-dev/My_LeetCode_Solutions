class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), row = 0, col = 0;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                row = (grid[i][j]-1)/m;
                col = (grid[i][j]-1)%m;
                while(grid[i][j] != grid[row][col]){
                    swap(grid[i][j], grid[row][col]);
                    row = (grid[i][j]-1)/m;
                    col = (grid[i][j]-1)%m;
                }
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] != i*m + j%m+1){
                    return {grid[i][j], i*m + j%m+1};
                }
            }
        }
        return {-1,-1};
    }
};