class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // sort(people.being(), people.end(), [&](vector<int>&a, vector<int>&b){
            // return 
        // });
        sort(people.begin(),people.end());

        int n = people.size();
        int boat = 0;
        // int curr = 0;
        int i = 0;
        int j = n-1;
        while(i<=j) {
            if ( people[i] + people[j] <= limit ) {
                i++;
            }
                j--;
            boat++;
        }

        // while( i<n-1 ) {
        //     if ( people[i]+people[i+1] <= limit ) {
        //         i+=2;
        //     } else {
        //         i++;
        //     }
        //     if( i+1==n-1){
        //         boat++;
        //     }
        //     boat++;
        // }

        return boat;
    }
};