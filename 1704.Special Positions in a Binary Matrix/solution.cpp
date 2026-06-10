class Solution {
public:
    bool found(int i,int j, int m, int n, vector<vector<int>> &mat){
        //row check
        for(int x=0;x<n;x++){
            if(x!=j && mat[i][x]!=0){
                return false;
            }
        }

        //col check
        for(int y=0;y<m;y++){
            if(y!=i && mat[y][j]!=0){
                return false;

            }
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();    
        int n = mat[0].size();
        vector<int> rowc(m+1);
        vector<int> colc(n+1);

        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // if(mat[i][j]==1 && found(i,j,m,n,mat)){
                if(mat[i][j]==1){
                    rowc[i]+=1;
                    colc[j]+=1;
                    // count++;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 && rowc[i]<=1 && colc[j]<=1){
                    count++;
                }
            }
        }
        return count;
    }
};