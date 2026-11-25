class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        int m = score[0].size();

        vector<int> ind(n);
        vector<int> temp(n);
        vector<vector<int>> res(n,vector<int>(m,0));
        //indx array
        //indx sort
        for( int i=0; i<n; i++ ) {
            ind[i] = i;
        }
        //array/ row used to sort the index
        for( int i=0; i<n; i++ ) {
            temp[i] = score[i][k];
        }
        //sorting the indexs
        sort(ind.begin(), ind.end(), [&](int a, int b){
            if ( temp[a]!=temp[b] ) {
                return temp[b]<temp[a];
            }
            return b<a;
        });
        for(int i=0;i<n;i++){
            cout<<ind[i]<<endl;
        }
        for( int i=0; i<n; i++){
            res[i] = score[ind[i]];
        }
        return res;




    }
};