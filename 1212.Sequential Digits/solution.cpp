class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        
        string seq = "123456789";
        string l = to_string(low);
        string r = to_string(high);
        int n = l.size();
        int m = r.size();

        for(int i = n; i <= m; i++) {
            for(int j = 0; j <= 9 - i; j++) {
                string temp = seq.substr(j, i);
                int num = stoi(temp);
                if(num >= low && num <= high) {
                    res.push_back(num);
                }
            }
        }
        return res;
    }
};