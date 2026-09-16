int findMin(int* nums, int numsSize) {
    int left = 0;
    int right = numsSize-1;

    if(nums[left]<=nums[right]){
        return nums[left];
    }

    while(left<right){
        int mid = left + (right-left)/2;

        if(nums[mid]>nums[right]){
            left = mid + 1;
        }else{
            right = mid;
        }
    }
    return nums[left];
}