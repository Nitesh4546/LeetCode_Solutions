class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> m1;
        unordered_map<string, char> m2;

        int n = pattern.size();
        char dil = ' '; 
        auto wordss = s | std::views::split(dil);
        vector<string> words;

        for(const auto &word : wordss) {
            words.push_back(std::string(word.begin(), word.end()));
        }

        if (pattern.size() != words.size()) {
            return false;
        }
        
        for(int i = 0; i < n; i++) {
            char c1 = pattern[i];
            string s1 = words[i];

            if(m1.find(c1) != m1.end()) {
                if(m1[c1] != s1) return false;
            }else {
                m1[c1] = s1;
            }

            if(m2.find(s1) != m2.end()) {
                if(m2[s1] != c1) return false;
            }else {
                m2[s1] = c1;
            }
        }
        return true;
    }
};