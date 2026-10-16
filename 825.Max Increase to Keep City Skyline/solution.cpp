class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> NS(n,0);

        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(NS[i]<grid[j][i]){
                    NS[i] = grid[j][i];
                }
            }
        }

        vector<int> EW(n,0);

        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(EW[i]<grid[i][j]){
                    EW[i] = grid[i][j];
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int he = min(NS[j],EW[i]);
                sum+=abs(grid[i][j]-he);
            }
        }      
        return sum;
    }
};