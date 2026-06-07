class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& arr, int truckSize) {
        sort(arr.begin(), arr.end(),cmp);
        int units = 0;
        // for(vector<int> a:arr){
        //     if(a[1]>truckSize) return units;
        //     units+=a[0]*a[1];
        //     truckSize-=a[1];
        // }
        int n = arr.size();
        for(int i=0;i<n;i++){
            int min_ = min(truckSize, arr[i][0]);
            truckSize-=min_;
            units += (min_*arr[i][1]);
        }

        return units;
    }
};