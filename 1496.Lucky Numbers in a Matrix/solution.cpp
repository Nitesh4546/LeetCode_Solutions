class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int num = 0;
        vector<int> res;

        for(int i=0;i<n;i++){
            int min = INT_MAX;
            int ind = -1;
            for(int j=0;j<m;j++){
                if(matrix[i][j]<min){
                    min = matrix[i][j];
                    ind = j;
                }
            }
            bool fl = true;
            for(int k = 0; k < n;k++){
                if(matrix[k][ind]>min){
                    // num = matrix[k][ind];
                    fl = false;
                    break;
                    // return res;
                }
            }
            if(fl){
                res.push_back(min);
            }
        }
        // res.push_back(num);
       return res;
    }
};


// class Solution {
// public:
//     vector<int> luckyNumbers(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         vector<int> res;

//         for(int i = 0; i < n; i++) {
//             int rowMin = INT_MAX;
//             int colIndex = -1;
//             for(int j = 0; j < m; j++) {
//                 if(matrix[i][j] < rowMin) {
//                     rowMin = matrix[i][j];
//                     colIndex = j;
//                 }
//             }
//             bool isMaxInCol = true;
//             for(int k = 0; k < n; k++) {
//                 if(matrix[k][colIndex] > rowMin) {
//                     isMaxInCol = false;
//                     break; 
//                 }
//             }

//             if(isMaxInCol) {
//                 res.push_back(rowMin);
//             }
//         }
//         return res;
//     }
// };
