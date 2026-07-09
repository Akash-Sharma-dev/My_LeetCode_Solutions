class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size(), move = 0;
        vector<bool>visit(n*n + 1, false);
        queue<int>q;
        q.push(1);
        visit[1] = true;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int cur = q.front();
                q.pop();
                if(cur==n*n){
                    return move;
                }
                for(int i = 1; i<=6; i++){
                    int next = cur+i;
                    if(next>n*n) break;
                    if(!visit[next]){
                        int row = n-1 - (next-1)/n;
                        int col;
                        
                        if(((next-1)/n)%2){
                            col = n-1 - (next-1)%n;
                        }else{
                            col = (next-1)%n;
                        }
                        if(board[row][col] != -1){
                            visit[next] = true;
                            q.push(board[row][col]);
                            
                        }else{
                            q.push(next);
                            visit[next] = true;
                        }
                    }
                }
            }
            move++;
        }
        return -1;
    }
};