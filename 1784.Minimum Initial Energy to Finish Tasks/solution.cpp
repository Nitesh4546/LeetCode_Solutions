class Solution {
private:
    bool helper(int mid, vector<vector<int>>& tasks) {
        int curr = mid;
        for (vector<int> task : tasks) {
            int act = task[0];
            int min_ = task[1];
            if (curr < min_) {
                return false;
            }
            curr -= act;
        }
        return true;
    }

public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [](vector<int>& a, vector<int>& b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });

        int l = 0;
        int r = 0;
        for (vector<int> task : tasks) {
            l += task[0];
            r += task[1];
        }

        int res = r;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (helper(mid, tasks)) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }
};
