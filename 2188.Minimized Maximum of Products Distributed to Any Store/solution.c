int candist(int n, int* quantities, int quantitiesSize, int prod) {
    int required = 0;
    for(int i=0;i<quantitiesSize;i++){
        required+=(quantities[i]+prod-1)/prod;
    }
    if(required>n) return false;
    return required<=n;
}

int minimizedMaximum(int n, int* quantities, int quantitiesSize) {
    int left = 1;
    int right = 0;
    for(int i=0;i<quantitiesSize;i++){
        if(right<quantities[i]){
            right = quantities[i];
        }
    }    
    int res = 0;

    while(left<=right){
        int mid = left +(right-left)/2;

        if(candist(n,quantities,quantitiesSize,mid)){
            res = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return res;
}