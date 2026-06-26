class Solution {
public:
    int digitFrequencyScore(int num) {
        vector<int> rec(10,0);
        while(num != 0) {
            rec[num%10]++;
            num /= 10;
        }
        int res = 0;
        for(int i = 0; i < 10; i++) {
            res = res + i*rec[i];
        }
        return res;
    }
};