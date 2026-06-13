class Solution {
public:
    int firstMissingPositive(vector<int>& num) {
        sort(num.begin(),num.end());
        int n = 1;
        for(int i:num){
            if(i==n){
                n++;
            }
        }
        return n;
    }
};