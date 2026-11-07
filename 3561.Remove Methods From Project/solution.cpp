class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        vector<bool> vis(n);

        for(vector<int> a: invocations) {
            adj[a[0]].push_back(a[1]);
        }

        queue<int> q;
        q.push(k);
        vis[k] = true;

        while(!q.empty()) {
            int u = q.front();
            q.pop();

            for(int v: adj[u]) {
                if(!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }

        vector<int> res;
        for(vector<int> a: invocations) {
        
            if(!vis[a[0]] && vis[a[1]]) {
                for(int i = 0; i < n; i++) {
                    res.push_back(i);
                }
                return res;
            }
        }

        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                res.push_back(i);
            }
        }
        return res;

    }
};