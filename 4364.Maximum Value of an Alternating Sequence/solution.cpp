class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        long long seq1 = s;
        long long seq2 = s;
        if(n == 1){
            return s;
        }
        
        int z = n - 1;
        if((n - 1) % 2 == 0){   
            z = n - 2;
        }
        return s + ((z + 1) / 2) * (long long)m - (z - 1) / 2;
    }
};