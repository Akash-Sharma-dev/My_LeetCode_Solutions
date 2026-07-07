class Solution {
public:
    bool dfs(vector<vector<int>>&graph, int source, int destination, vector<bool>&visit){
        visit[source] = true;
        if(source==destination) return true;
        for(auto node : graph[source]){
            if(!visit[node]){
                if(dfs(graph, node, destination, visit)){
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<bool>visit(n,false);
        dfs(graph, source, destination, visit);
        return visit[destination];
    }
};