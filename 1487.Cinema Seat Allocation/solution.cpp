class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& seats) {
        int c = 0;
        unordered_map<int, vector<int>> rec;

        for(vector<int> a: seats) {
            rec[a[0]].push_back(a[1]);
            
        }

        for(auto &a: rec) {
            vector<bool> rev(11, true);
            for(int i: a.second) {
                rev[i] = false;
            }
            bool left = rev[2] && rev[3] && rev[4] && rev[5];
            bool middle = rev[4] && rev[5] && rev[6] && rev[7];
            bool right = rev[6] && rev[7] && rev[8] && rev[9];
            
            if(left && right) {
                c += 2;
            }else if(left || middle || right) {
                c += 1;
            }

        }
        int reserv = rec.size();
        int empt = n - reserv;
        c += empt * 2;
        return c;
    }
};