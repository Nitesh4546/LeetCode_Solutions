class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> rec(26,0);
        // int n = 0;
        for(char c:s) {
            rec[c-'a']+=1;
            if (rec[c-'a']==2){
                return c;
            }
        }
        return ' ';
    }
};