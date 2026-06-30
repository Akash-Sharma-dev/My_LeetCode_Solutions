class Solution {
public:
    int perimeter(vector<vector<int>>&grid, int i, int j, int &count){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()){
            return 1;
        }
        if(grid[i][j] == 1){
            grid[i][j] = 2;
            count += perimeter(grid,i-1,j,count);
            count += perimeter(grid,i+1,j,count);
            count += perimeter(grid,i,j-1,count);
            count += perimeter(grid,i,j+1,count);
        }
        if(grid[i][j] == 0){
            return 1;
        }
        return 0;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size(), count = 0,i=0,j=0;
        int flag = 0;
        for(i = 0; i<n; i++){
            for(j = 0; j<m; j++){
                if(grid[i][j] == 1){
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        perimeter(grid,i,j,count);
        return count;
    }
};