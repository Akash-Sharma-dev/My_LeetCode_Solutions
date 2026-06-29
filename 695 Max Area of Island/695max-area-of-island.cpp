class Solution {
public:
    int isIsland(vector<vector<int>>& grid, int i, int j, int &count){
        if(i>=grid.size() || j>=grid[i].size()){
            return count;
        }
        if(grid[i][j] == 1){
            grid[i][j] = 0;
            count +=1;
            isIsland(grid,i+1,j,count);
            isIsland(grid,i-1,j,count);
            isIsland(grid,i,j+1,count);
            isIsland(grid,i,j-1,count);
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), count = 0, m_count = 0;

        vector<int>r = {-1,1,0,0};
        vector<int>c = {0,0,-1,1};

        for(int i = 0; i<n; i++){
            int m = grid[i].size();
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 0) continue;
                queue<pair<int,int>>q;
                pair<int,int>cur;
                q.push({i,j});
                grid[i][j] = 0;
                count = 0;
                while(!q.empty()){
                    cur = q.front();
                    q.pop();
                    for(int i = 0; i<4;i++){
                        int n_r = cur.first + r[i];
                        int n_c = cur.second + c[i];
                        if((n_r >= 0 && n_r < n && n_c>=0 && n_c < m) && grid[n_r][n_c] == 1){
                            q.push({n_r,n_c});
                            grid[n_r][n_c] = 0;
                        }
                    }
                    count++;
                }
                m_count = max(m_count, count);
            }
        }
        return m_count;
    }
};