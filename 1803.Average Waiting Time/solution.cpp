class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();

        long long c = 0;
        double wt = 0;

        for(vector<int> a:customers) {
            if(c<a[0]) {
                c = a[0];
            }
            c += a[1];
            wt += (c-a[0]);
        }
        return (double)wt/n;

    }
};