class Solution {
    public double myPow(double x, long n) {
        long N = n;
        if(N==0){
            return 1;
        }
        if(N<0){
            x=1/x;
            N*=-1;
        }
        double res = myPow(x,N/2);
        res *= res;
        if(N%2==1){
            res*=x;
        }
        return res;
    }
}