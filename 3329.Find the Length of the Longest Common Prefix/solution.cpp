class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> pre;
        for (int i : arr1) {
            int x = i;
            while (x) {
                pre.insert(x);
                x /= 10;
            }
        }
        int max_ = 0;
        for (int i : arr2) {
            int x = i;
            while (x) {
                if (pre.count(x)) {
                    max_ = max(max_, x);
                    break;
                }
                x /= 10;
            }
        }
        int c = 0;
        while (max_) {
            c++;
            max_ /= 10;
        }
        return c;
    }
};