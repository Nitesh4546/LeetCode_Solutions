class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0;
        int r = n * m - 1;
// rows: matrix[ind / col]
//col: ind %col
        while(l <= r) {
            int mid = l + (r - l) / 2;

            if(matrix[mid / m][mid % m] == target) {
                return true;
            }else if(matrix[mid / m][mid % m] > target) {
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        return false;
    }
};