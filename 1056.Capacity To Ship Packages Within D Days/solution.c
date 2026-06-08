bool canship(int* weights, int weightsSize, int days, int cap){
    int totaldays = 1;
    int load = 0;
    for(int i=0;i<weightsSize;i++){
        if(load+weights[i]>cap){
            totaldays++;
            load = weights[i];
            if(totaldays>days) return false;
        }else{
            load+=weights[i];
        }
    }
    return true;
}
int shipWithinDays(int* weights, int weightsSize, int days) {
    int left = 0;
    int right = 0;
    for(int i=0;i<weightsSize;i++){
        if(left<=weights[i]){
            left = weights[i];
        }
        right += weights[i];
    }
    int res = right;
    while(left<=right){
        int mid = left + (right-left)/2;

        if(canship(weights,weightsSize,days,mid)){
            res = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return res;
}