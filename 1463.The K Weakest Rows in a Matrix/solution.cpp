class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> row(n);
        // int ind = 0;
        for(int i=0; i<n; i++){
            int c = 0;
            for(int j=0; j<m; j++){
                if(mat[i][j]==1){
                    c++;
                }
            }
            row[i] = c;
        }
        vector<int> ind(n);
        for(int i=0; i<n; i++){
            ind[i] = i;
        }
        sort(ind.begin(), ind.end(), [&](int a, int b){
            if(row[a] != row[b]) {
                return row[a] < row[b];
            }
            return a < b;
            // return row[a]<row[b];
        });
        vector<int> res(k);
        for(int i=0; i<k; i++){
            res[i] = ind[i];
        }
        return res;
    }
};