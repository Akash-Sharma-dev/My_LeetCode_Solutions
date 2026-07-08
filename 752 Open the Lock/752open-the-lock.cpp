class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        if(target=="0000") return 0;
        unordered_set<string>visit;
        unordered_set<string>dead(deadends.begin(), deadends.end());
        queue<string>q;
        q.push("0000");
        visit.insert("0000");
        int move = 0;
        if(dead.count("0000")) return -1;
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                string cur = q.front();
                q.pop();
                if(cur==target)
                    return move;
                for(int i = 0; i<4; i++){
                    string next = cur;

                    next[i] = (cur[i]=='9')?'0':cur[i]+1;
                    if(!visit.count(next) && !dead.count(next)){
                                                                    
                        q.push(next);
                        visit.insert(next);
                    }
                    next = cur;
                    next[i] = (cur[i]=='0')?'9':cur[i]-1;
                    if(!visit.count(next) && !dead.count(next)){
                        q.push(next);
                        visit.insert(next);
                    }
                }
            }
            move++;
        }
        return -1;
    }
};