class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> a, b;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(img1[i][j] == 1) {
                    a.emplace_back(i, j);
                }
                if(img2[i][j] == 1) {
                    b.emplace_back(i, j);
                }
            }
        }

        vector<vector<int>> temp(2 * n, vector<int>(2 * n, 0));
        int ans = 0;
        for(auto& _: a) {
            for(auto& __: b) {
                int dx = __.first - _.first + n;
                int dy = __.second - _.second + n;
                temp[dx][dy]++;
                ans = max(ans, temp[dx][dy]);
            }
        }
        return ans;
    }
};