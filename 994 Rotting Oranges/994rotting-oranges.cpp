class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n= grid.size(), m = grid[0].size(), minutes = 0,rotten = 0, fresh = 0;
        queue<pair<int,int>>q;
        bool flag = false;
        vector<int>dr = {-1,1,0,0};
        vector<int>dc = {0,0,-1,1};

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                    rotten++;
                }else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        while(!q.empty()){
            int size = q.size();
            flag = false;
            for(int i = 0; i<size; i++){
                pair<int,int>cur = q.front();
                q.pop();
                int r = cur.first;
                int c = cur.second;

                for(int k = 0; k<4; k++){
                    int new_r = r + dr[k];
                    int new_c = c + dc[k];
                    if(new_r<0 || new_r>=n || new_c<0 || new_c>=m){
                        continue;
                    }
                    
                    if(grid[new_r][new_c] == 1){
                        flag = true;
                        q.push({new_r,new_c});
                        fresh--;
                        grid[new_r][new_c] = 2;
                    }
                }
            }
            if(flag) minutes++;
        }
        if(fresh>0) return -1;
        return minutes;
    }
};