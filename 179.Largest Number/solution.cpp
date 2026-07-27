class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> rec;
        for(int i:nums) {
            rec.push_back(to_string(i));
        }
        sort(rec.begin(), rec.end(), [&](string a, string b){
            return a + b > b + a;
        });
        if(rec[0] == "0"){
            return rec[0];
        }
        string res = "";
        for(string i:rec) {
            res += i;
        }
        return res;
    }
};