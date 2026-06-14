class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> res;
        int count = 0;
        
        // if(n==1){
        //     for(int i=0;i<m;i++){
        //         res.push_back(matrix[0][i]);
        //     }
        //     return res;
        // }
        // if(m==1){
        //     for(int i=0;i<n;i++){
        //         res.push_back(matrix[i][0]);
        //     }
        //     return res;
        // }
        int minr = 0;
        int maxr = n-1;
        
        int minc = 0;
        int maxc = m-1;
        int total = n*m;
        while(count<total){
            
            //top
            for(int i=minc;count<total && i<=maxc;i++){
                res.push_back(matrix[minr][i]);
                count++;
            }
            minr++;
            // if(count>n*m) break;

            //right
            for(int i=minr;count<total && i<=maxr;i++){
                res.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            // if(count>n*m) break;
            
            //bottom
            for(int i=maxc;count<total && i>=minc;i--){
                res.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            // if(count>n*m) break;
            
            //left
            for(int i=maxr;count<total && i>=minr;i--){
                res.push_back(matrix[i][minc]);
                count++;
            }
            minc++;

        }
        return res;
    }
};