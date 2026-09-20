class Solution {
public:
    long long power(long long base, long long exp, long long mod) {
        long long res = 1;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> res;

        int n = variables.size();
        for (int i = 0; i < n; i++) {
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2];
            int m = variables[i][3];
            
            long long cmp = power(a,b,10);
            long long cmp1 = power(cmp,c,m);

            if (cmp1 == target) {
                res.push_back(i);
            }
        }
        return res;
    }
};