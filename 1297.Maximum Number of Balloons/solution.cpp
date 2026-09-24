class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if(text.size() < 7) return 0;
        vector<int> rec(5, 0);
        //0 -> a
        //1 -> b
        //2 -> l
        //3 -> o
        //4 -> n
        for(char ch : text) {
            if(ch == 'a') rec[0]++;
            else if(ch == 'b') rec[1]++;
            else if(ch == 'l') rec[2]++;
            else if(ch == 'o') rec[3]++;
            else if(ch == 'n') rec[4]++;
        }
        return min({rec[1], rec[0], rec[2] / 2, rec[3] / 2, rec[4]});
    }
};