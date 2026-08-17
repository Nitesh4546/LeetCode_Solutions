class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // vector<vector<int>> adj(n+1);
        vector<int> indeg(n+1,0);
        vector<int> oudeg(n+1,0);

        for(int i=0;i<trust.size();i++){
            int a = trust[i][0];
            int b = trust[i][1];
            // adj[a].push_back(b);

            oudeg[a]++;
            indeg[b]++;
        }

        for(int i=1;i<=n;i++){
            if(indeg[i]==n-1 && oudeg[i]==0){
                return i;
            }
        }
        return -1;
    }
};