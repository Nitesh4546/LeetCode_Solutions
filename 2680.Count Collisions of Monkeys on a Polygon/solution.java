class Solution {
    int MOD = 1000000007;
    public long power(int n){        
        if (n == 0) return 1;
        long res = power(n / 2);
        res *=res;
        res%=MOD;
        if (n % 2 == 1) {
            res = (res * 2) % MOD;
        }
        return res;
    }
    public int monkeyMove(int n) {
        long res = power(n);
        return (int)((res-2+MOD)%MOD);
    }
}