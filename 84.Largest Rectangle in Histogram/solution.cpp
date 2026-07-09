class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse(n,0);
        vector<int> pse(n,0);
        stack<int> temp;

        //Next Smaller Element
        for(int i=n-1;i>=0;i--){
            while(!temp.empty() && heights[temp.top()]>=heights[i]){
                temp.pop();
            }
            if(temp.empty()){
                nse[i] = n;
            }else{
                nse[i] = temp.top();
            }
            // ns
            temp.push(i);
        }
        while(!temp.empty()){
            temp.pop();
        }

        //Previous Smaller Element
        for(int i=0;i<n;i++){
            while(!temp.empty() && heights[temp.top()]>=heights[i]){
                temp.pop();
            }
            if(temp.empty()){
                pse[i] = -1;
            }else{
                pse[i] = temp.top();
            }
            temp.push(i);
        }
        while(!temp.empty()){
            temp.pop();
        }
        

        int max_ = 0;
        for(int i=0;i<n;i++){
            max_ = max(max_,(nse[i]-pse[i]-1)*heights[i]);
        }
        return max_;
    }
};