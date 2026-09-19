class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> temp(n,0);
        // vector<int> res(n,0);
        int k = bookings.size();
        for (int i=0; i<k; i++) {
            for (int t=bookings[i][0]; t<=bookings[i][1]; t++) {
                temp[t-1] += bookings[i][2];
            }
        }
        return temp;
    }
};