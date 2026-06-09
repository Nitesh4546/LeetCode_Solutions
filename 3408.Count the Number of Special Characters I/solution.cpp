class Solution {
public:
    int numberOfSpecialChars(string word) {
        // string word = "aabcBC";
        set<char> rec; //
        for (char c : word) {
            rec.insert(c);
        }

        vector<int> temp(26, 0);
        for (char c : rec) {
            if (c >= 'A' && c <= 'Z') {
                temp[c - 'A']++;
            } else {
                temp[c - 'a']++;
            }
        }
        int c = 0;
        for (int i : temp) {
            if (i >= 2) {
                c++;
            }
        }
        return c;
    }
};