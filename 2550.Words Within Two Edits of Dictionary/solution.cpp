class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int w = queries[0].size();
        int c = 0;
        vector<string> res;

        for(const string& q: queries){
            for(const string& d: dictionary){
                c = 0;
                for(int i = 0; i<w; i++){
                    if(q[i] != d[i]) c++;
                    if(c>2) break;
                }
                if(c<=2){
                    res.push_back(q);break;
                }
                c = 0;
            }
        }
        return res;
    }
};