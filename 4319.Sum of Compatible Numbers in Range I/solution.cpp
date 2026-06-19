class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0;
        int low = max(1, n-k);
        int upp = n + k;
        for(int i = low; i <= upp; i++) {
            if((n & i) == 0) {
                sum += i;
            }
        }
        return sum;
    }
};