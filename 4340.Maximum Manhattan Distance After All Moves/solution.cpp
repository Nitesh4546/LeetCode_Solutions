class Solution {
public:
    int maxDistance(string moves) {
        int r = 0;
        int l = 0;
        int u = 0;
        int d = 0;
        int dash = 0;
        for(char c: moves) {
            if(c == 'R') r++;
            else if(c == 'L') l++;
            else if(c == 'U') u++;
            else if(c == 'D') d++;
            else dash++;
        }
        return abs(r - l) + abs(u - d) + dash;
    }
};