class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int curr = 0;
        int total = 0;
        int start = 0;

        for(int i = 0; i < n; i++) {
            int net = gas[i] - cost[i];
            curr += net;
            total += net;

            if(curr < 0){
                curr = 0;
                start = i + 1;
            }
        }
        //track if the cost is more than the gas fuels
        if(total < 0) {
            return -1;
        }
        return start;
    }
};