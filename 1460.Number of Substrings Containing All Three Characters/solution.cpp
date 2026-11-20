class Solution {
public:
    int numberOfSubstrings(string s) {
        //abcabc
        int n = s.size();
        vector<int> rec(3, 0);
        int j = 0;
        int count = 0;
        for(int i = 0; i < n; i++) {
            rec[s[i] - 'a']++;

            while(rec[0] > 0 && rec[1] > 0 && rec[2] > 0) {
                count += (n - i);
                rec[s[j] - 'a']--;
                j++;
            }
        }
        return count;
    }
};