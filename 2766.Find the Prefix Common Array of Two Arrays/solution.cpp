class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> rec(n+1,0);
        vector<int> res(n,0);
        int c=0;

        for(int i=0; i<n; i++) {
            rec[A[i]]++;
            if(rec[A[i]]==2){
                c++;
            }

            rec[B[i]]++;
            if(rec[B[i]]==2){
                c++;
            }
            res[i] = c;
        }
        return res;
    }
};