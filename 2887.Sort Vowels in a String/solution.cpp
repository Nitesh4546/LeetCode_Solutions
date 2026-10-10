class Solution {
public:
    bool isvow(char c) {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char> vow;
        for(char c:s) {
            if (isvow(c)) {
                vow.push_back(c);
            }
        }
        sort(vow.begin(), vow.end(), [&](char a, char b){
            return a<b;
        });

        int v_n = vow.size();
        int n = s.size();
        int j = 0;
        for(int i=0; i<n; i++) {
            if(isvow(s[i])){
                s[i] = vow[j];
                j++;
            }
        }
        return s;
    }
};