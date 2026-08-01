class Solution {
public:
    int minimumPushes(string word) {
        int push = 0;
        int n = word.size();
        for(int i = 0; i < n; i++) {
            push += (i / 8) + 1;
        }
        return push;
    }
};