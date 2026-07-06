class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        queue<int>q;
        vector<bool>visit(n,false);
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(visit[i]) continue;
            q.push(i);
            visit[i] = true;
            count++;
            while(!q.empty()){
                int cur = q.front();
                q.pop();

                for(int j = 0; j<n; j++){
                    int con = isConnected[cur][j];
                    if(!con) continue;
if(!visit[j]){
                        visit[j] = true;
    q.push(j);
                    }
                }
            }
        }
        return count;        
    }
};