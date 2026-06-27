class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int n, int m) {
        vector<vector<int>>res(n,(vector<int> (m,0)));
        int size = original.size();
        if(size<n*m || size>n*m){
            // res.empty();
            vector<vector<int>> c;
            return c;
        }

        int counter = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[i][j] = original[counter];
                counter++;
            }
        }
        return res;
    }
};