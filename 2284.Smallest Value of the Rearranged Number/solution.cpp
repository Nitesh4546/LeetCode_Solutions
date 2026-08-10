class Solution {
public:
    long long smallestNumber(long long num) {
        vector<int> rec;
        bool neg = num < 0;
        if (num == 0) {
            return num;
        }

        if (neg) {
            num *= -1;
        }

        while (num != 0) {
            rec.push_back(num % 10);
            num /= 10;
        }
        int n = rec.size();
        sort(rec.begin(), rec.end());
        long long res = 0;
        if (neg) {
            for (int i = n - 1; i >= 0; i--) {
                res = res * 10 + rec[i];
            }
            res *= -1;
        } else {
        // swapping with non -zero value
            if (rec[0] == 0) {
                for (int i = 1; i < n; i++) {
                    if (rec[i] != 0) {
                        rec[0] = rec[i];
                        rec[i] = 0;
                        break;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                res = res * 10 + rec[i];
            }
        }
        return res;
    }
};