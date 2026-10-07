class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        // int ind = 0;
        vector<int> res;
        
        int r = 0;
        int c = 0;
        for(int i = 0;i<n*m;i++){
            res.push_back(matrix[r][c]);
            if((r+c)%2==0){
                if(c==m-1){
                    r++;
                }
                else if(r==0){ 
                    c++;
                }else{
                    r--;
                    c++;
                }
            }else{
                if(r==n-1){
                    c++;
                }else if(c==0){ 
                    r++;
                }else{
                    c--;
                    r++;
                }
            }
        }
        return res;
    }
};