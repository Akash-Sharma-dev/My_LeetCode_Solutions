class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size(),a = 0,b = 0,x;
        for(int i = 0; i<n;i++){
            for(int j = 0; j<n;){
                x = grid[i][j];
                if(grid[(x-1)/n][(x-1)%n] != grid[i][j]){
                     swap(grid[i][j], grid[(x-1)/n][(x-1)%n]);
                }else{
                     j++;
                }
            }
        }
        for(int i = 0; i<n;i++){
            for(int j = 0; j<n; j++){
                x = grid[i][j];
                if(x != i*n + j+1){
                    return {x, i*n + j+1};
                }
            }
        }
        return {a, b};
    }
};
