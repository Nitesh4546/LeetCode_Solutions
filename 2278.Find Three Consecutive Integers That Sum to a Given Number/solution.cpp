class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> res;
        if (!(num % 3 != 0)){
            long long cmp = num/3;
            res.push_back(cmp-1);
            res.push_back(cmp);
            res.push_back(cmp+1);
        } 
        return res;
    }
};
