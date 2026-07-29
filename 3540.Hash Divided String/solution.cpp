class Solution {
public:
    string stringHash(string s, int k) {
        string res;
        int n = s.size();
        for(int i = 0; i < n; i += k) {
            string temp = s.substr(i, k);
            int sum = 0;
            for(char c: temp) {
                sum += c - 'a';
            }
            res += sum % 26 + 'a';
        }
        return res;
    }
};