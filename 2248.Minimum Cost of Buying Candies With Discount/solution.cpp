class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), [&](int a, int b){
            return a>b;
        });
        int n = cost.size();
        int trip = 0;
        int amt = 0;

        for(int i = 0; i < n; i++) {
            trip++;
            if(trip == 3) {
                trip = 0;
            }else {
                amt += cost[i];
            }
        }
        return amt;
    }
};