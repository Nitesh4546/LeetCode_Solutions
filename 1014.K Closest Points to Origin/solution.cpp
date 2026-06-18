class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        
        vector<vector<int>> res(k);
        vector<int> ind(n);
        vector<int> dist(n);
        
        for(int i=0;i<n;i++) {
            ind[i] = i;
        }
        

        for(int i=0; i<n; i++){
            int x = points[i][0]*points[i][0];
            int y = points[i][1]*points[i][1];
            // int dis = sqrt(x+y);
            dist[i] = x+y;
        }

        sort(ind.begin(),ind.end(),[&](int a, int b){
            if(dist[a]!=dist[b]){
                return dist[a]<dist[b];
            }
            return a<b;
        });

        for(int i=0;i<k;i++){
            res[i] = points[ind[i]];
        }
        return res;
    }
};