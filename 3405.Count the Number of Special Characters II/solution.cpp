class Solution {
public:
    int numberOfSpecialChars(string word) {
        // set<char> lo;
        int n = word.size();
        vector<int> llast(26,-1);
        vector<int> ufirs(26,-1);
        for(int i = 0; i < n; i++) {
            if (islower(word[i])) {
                llast[word[i] - 'a'] = i;
            }else {
                if (ufirs[word[i] - 'A'] == -1) {
                    ufirs[word[i] - 'A'] = i;
                }
            }
        }
        int c = 0;
        for(int i = 0; i < 26; i++) {
            if (llast[i] != -1 && ufirs[i] != -1) {
                if (ufirs[i] > llast[i]) {
                    c++;
                }
            }
        }

        return c;
    }
};