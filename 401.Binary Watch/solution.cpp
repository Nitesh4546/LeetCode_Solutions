class Solution {
public:
    int get(int n){
        int c = 0;
        while(n>0){
            n&=(n-1);
            c++;
        }
        return c;
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for(int h = 0;h<12;h++){
            for(int m=0;m<60;m++){
                if(get(h)+get(m)==turnedOn){
                    string time = to_string(h)+":"+(m<10?"0":"")+to_string(m);
                    res.push_back(time);
                }
            }
        }
        return res;
    }
};