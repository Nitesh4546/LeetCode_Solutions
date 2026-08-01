class Solution {
public:
    int binaryGap(int n) {
        int max_ = 0;
        int last = -1;
        int curr = 0;

        while (n > 0) {
            if (n & 1) {

                if (last != -1) {
                    max_ = max(max_, curr - last);
                }
                last = curr;
            }
            n >>= 1;
            curr++;
        }
        return max_;
    }
};