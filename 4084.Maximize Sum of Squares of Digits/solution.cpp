class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > 9 * num) return "";

        string res;
        while(num-- > 0) {
            int dig = min(9, sum);
            res += char('0' + dig);
            sum -= dig;
        }
        return sum == 0 ? res : "";
    }
};