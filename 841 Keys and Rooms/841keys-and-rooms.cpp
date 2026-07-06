class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int>q;
        vector<bool>visit(n,false);
        visit[0] = 1;
        q.push(0);

        while(!q.empty()){
            int cur = q.front();
            q.pop();

            for(auto node : rooms[cur]){
                if(!visit[node]){
                    visit[node] = true;
                    q.push(node);
                }
            }
        }

        for(int i = 0; i<n; i++){
            if(!visit[i]){
                return false;
            }
        }
        return true;
    }
};