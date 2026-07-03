class Solution {
public:
    int reverse(int x) {
        // bool fl = (x>0)?false: true;
        // if(fl){
        //     x*=(-1);
        // }
        int temp = 0;
        while(x!=0){
            int rem = x%10;
            x/=10;
            if(temp>INT_MAX/10 || (rem == INT_MAX/10 && rem>7)) return 0;
            if(temp<INT_MIN/10 || (rem == INT_MIN/10 && rem<-8)) return 0;
            temp = temp*10 + rem;
        }
        // if(fl){
        //     temp*=(-1);
        // }
        return temp;
    }
};