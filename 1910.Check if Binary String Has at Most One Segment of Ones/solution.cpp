class Solution {
public:
    bool checkOnesSegment(string s) {
        int k = 1;
        int n = s.size();
        bool flg = true;

        for(int i=1;i<n;i++){
            if(s[i]=='1' && k==0){
                return false;
            }else if(s[i]=='1' && k==1){
                flg = true;
            }else{
                k=0;
            }
        }
        return flg;
    }
};