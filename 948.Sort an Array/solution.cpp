class Solution {
public:
    void merge(vector<int>& nums, int l, int r, int m) {
        int nl = m - l + 1;
        int nr = r - m;
        vector<int> lf(nl), ri(nr);
        for(int i = 0; i < nl; i++) lf[i] = nums[l + i];
        for(int i = 0; i < nr; i++) ri[i] = nums[m + 1 + i];

        int i = 0;
        int j = 0;
        int k = l;
        while(i < nl && j < nr) {
            if(lf[i] <= ri[j]) {
                nums[k++] = lf[i++];
            }else {
                nums[k++] = ri[j++];
            }
        }
        while(i < nl) nums[k++] = lf[i++];
        while(j < nr) nums[k++] = ri[j++];

    }
    void mergeSort(vector<int>& nums, int l, int r) {
        if(l >= r) {
            return;
        }
        int m = l + (r - l) / 2;
        mergeSort(nums, l, m);
        mergeSort(nums, m + 1, r);
        merge(nums, l, r, m);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};