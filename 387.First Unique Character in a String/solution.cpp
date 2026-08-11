class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> rec(26,0);
        int n = s.size();
        for(int i=0; i<n; i++) {
            rec[s[i]-'a']+=1;
        }
        
        for(int i=0; i<n; i++) {
            if (rec[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};