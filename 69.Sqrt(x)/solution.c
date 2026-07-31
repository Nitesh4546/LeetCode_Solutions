int mySqrt(int x) {
    int l = 1;
    int r = x;
    int res = 1;
    if(x==0) return 0;
    while(l<=r){
        long mid = l+(r-l)/2;
        long sq = mid*mid;
        if(sq==x){
            return mid;
        }
        if(sq<x){
            res = mid;
            l = mid + 1;
        }else{
            
            r = mid - 1;
        }
    }
    return res;
}