class Solution {
public:
    int minOperations(string s) {

        int n = s.size();
        char tempa;
        char tempb;
        int a = 0;
        int b = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                tempa = '0';
                tempb = '1';
            } else {
                tempa = '1';
                tempb = '0';
            }
            if (tempa != s[i]) {
                a++;
            }
            if (tempb != s[i]) {
                b++;
            }
        }
        return min(a, b);
    }
};