int arrangeCoins(int n) {
    long long l = 1;
    long long r = n;
    long long res = 0;
    while(l<=r){
        long mid = l+(r-l)/2;
        long row = mid*(mid + 1)/2;
        if(row > n){
            r = mid-1;
        }else{
            if(res<mid){
                res = mid;
            }
            l = mid+1;
        }
    }
    return res;
}