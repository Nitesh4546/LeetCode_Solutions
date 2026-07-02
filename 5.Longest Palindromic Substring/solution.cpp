class Solution {
public:
    int center(string s, int left, int right) {
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
    string longestPalindrome(string s) {
        int start = 0;
        int n = s.size();
        int max_ = 0;

        for(int i = 0; i < n; i++) {
            int len1 = center(s, i, i);
            int len2 = center(s, i, i + 1);
            int curr = max(len1, len2);

            if(curr > max_) {
                max_ = curr;
                start = i - (max_ - 1) / 2;
            }
        }
        return s.substr(start, max_);
    }
};