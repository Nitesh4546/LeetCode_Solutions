class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> jour(1001,0);

        for(vector<int> t:trips){
            jour[t[1]]+=t[0];//at jour[t[1]] = passangers enter car
            jour[t[2]]-=t[0];//at jour[t[2]] = passanger exit car
        }
        int curr = 0;
        for(int i=0; i<1001; i++){
            curr+=jour[i];
            if(curr>capacity) {
                return false;
            }
        }
        return true;
    }
};