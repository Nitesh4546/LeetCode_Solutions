class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<char> col(n, 'U'); // markd uncolored
        queue<int> q;
        // 2 colors: A and B

        for (int i = 0; i < n; i++) {
            if (col[i] != 'U') {
                continue;
            }
            
            q.push(i);
            col[i] = 'B';

            while (!q.empty()) {
                int curr = q.front();
                q.pop();

                for (int neighbor : graph[curr]) {
                    if (col[neighbor] == col[curr]) {
                        return false;
                    }
                    if (col[neighbor] == 'U') {
                        col[neighbor] = (col[curr] == 'A') ? 'B' : 'A'; // 
                        q.push(neighbor);
                    }
                }
            }
        }
        return true;
    }
};
