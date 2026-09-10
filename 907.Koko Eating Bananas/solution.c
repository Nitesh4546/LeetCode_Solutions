bool caneat(int *piles, int pileSize, int h, int n){
    int hour = 0;
    for(int i=0;i<pileSize;i++){
        // hour+=piles[i]/n;
        // if(piles[i]%n!=0) hour++;
        hour += (piles[i] +n-1)/n;
        if(hour>h) return false;
    }
    return hour<=h;
}
int minEatingSpeed(int* piles, int pilesSize, int h) {
    int left = 1;
    int right = piles[0];
    for(int i=0;i<pilesSize;i++){
        if(right<=piles[i]){
            right = piles[i];
        }
    }
    int ans = right;
    int mid = 0;
    while(left<=right){
        mid = left +(right-left)/2;
        if(caneat(piles,pilesSize,h,mid)){
            ans = mid;
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return ans;
}