class Solution {
public:
    string removeStars(string s) {
        vector<char> rec;
        for(char c:s) {
            if(c == '*') {
                rec.pop_back();
            }else {
                rec.push_back(c);
            }
        }
        return string(rec.begin(), rec.end());
    }
};