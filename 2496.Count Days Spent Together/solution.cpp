class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        return max({0, min(helper(leaveAlice), helper(leaveBob)) - max(helper(arriveAlice), helper(arriveBob)) + 1});
    }
    int helper(string &s) {
        int m = (s[0] - '0') * 10 + (s[1] - '0');
        int q = (s[3] - '0') * 10 + (s[4] - '0');
        return (275 * m) / 9 - 2 * ((m + 9) / 12) + q - 30;
    }
};