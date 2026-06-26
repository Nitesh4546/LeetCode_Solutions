class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // Initialize an n x n matrix with 0s
        vector<vector<int>> res(n, vector<int>(n, 0));
        
        int total = n * n;
        int count = 0;
        int val = 1; 
        
        int minr = 0, maxr = n - 1;
        int minc = 0, maxc = n - 1;
        
        while (count < total) {
            //top
            for (int i = minc; count < total && i <= maxc; i++) {
                res[minr][i] = val++;
                count++;
            }
            minr++;

            //right
            for (int i = minr; count < total && i <= maxr; i++) {
                res[i][maxc] = val++;
                count++;
            }
            maxc--;
            
            // bottom
            for (int i = maxc; count < total && i >= minc; i--) {
                res[maxr][i] = val++;
                count++;
            }
            maxr--;
            
            // left
            for (int i = maxr; count < total && i >= minr; i--) {
                res[i][minc] = val++;
                count++;
            }
            minc++;
        }
        
        return res;
    }
};