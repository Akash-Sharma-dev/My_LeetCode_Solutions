class Solution {
public:
    void isIsland(vector<vector<char>> &grid,int i, int j, vector<vector<char>>&grid_c){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()){
            return;
        }
        if(grid[i][j] == 'O'){
            grid[i][j] = 'X';
            grid_c[i][j] = 'X';
            isIsland(grid,i-1,j,grid_c);
            isIsland(grid,i+1,j,grid_c);
            isIsland(grid,i,j-1,grid_c);
            isIsland(grid,i,j+1,grid_c);
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size(),x;
        vector<vector<char>> grid_c = board;

        for(int i = 0; i<n; i++){
            x = m-1;
            if(i == 0 || i == n-1){
                x = 1;
            }
            for(int j = 0; j<m; j+=x){
                if(grid_c[i][j] == 'X') continue;
                isIsland(grid_c,i,j,grid_c);
            }
        }
        for(int i = 1; i<n; i++){
            for(int j = 1; j<m; j++){
                if(grid_c[i][j]=='X') continue;
                isIsland(grid_c,i,j,board);
            }
        }
    }
};