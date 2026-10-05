class Solution {
public:
    int findAvg(vector<vector<int>>& img,int i,int j){
        int sum=img[i][j];
        int c=1;
        if(i-1>=0 && j-1>=0){
            c++;
            sum+=img[i-1][j-1];
        }
        if(i-1>=0){
            c++;
            sum+=img[i-1][j];
        }
        if(i-1>=0 && j+1<img[0].size()){
            c++;
            sum+=img[i-1][j+1];
        }
        if(j-1>=0){
            c++;
            sum+=img[i][j-1];
        }
        if(j+1<img[0].size()){
            c++;
            sum+=img[i][j+1];
        }
        if(i+1<img.size() && j-1>=0){
            c++;
            sum+=img[i+1][j-1];
        }
        if(i+1<img.size()){
            c++;
            sum+=img[i+1][j];
        }
        if(i+1<img.size() && j+1<img[0].size()){
            c++;
            sum+=img[i+1][j+1];
        }

        return sum/c;
        
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
           
        vector<vector<int>> ans(img.size(),vector<int>(img[0].size()));

        for(int i=0;i<img.size();i++){
            for(int j=0; j<img[0].size(); j++){
                ans[i][j]=findAvg(img,i,j);
            }
        }
        return ans;
    }
};