class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(n + 1);

        for (auto dislike : dislikes) {
            int u = dislike[0];
            int v = dislike[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        queue<int> q;
        vector<int> dis(n + 1, -1);
        for (int i = 1; i <= n; i++) {
            if (dis[i] != -1)
                continue;
            q.push(i);
            dis[i] = 0;

            while (!q.empty()) {
                int cur = q.front();
                q.pop();

                for (auto node : graph[cur]) {
                    if (dis[node] == -1) {
                        q.push(node);
                        dis[node] = 1 - dis[cur];
                    }
                    if (dis[node] != 1 - dis[cur]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};