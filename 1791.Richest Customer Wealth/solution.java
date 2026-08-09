class Solution {
    public int maximumWealth(int[][] accounts) {
        int wealth = 0;
        for(int i[]: accounts){
            int sum = 0;
            for(int j:i){
                sum +=j;
            }
            if(sum>wealth){
                wealth = sum;
            }
        }
        return wealth;
    }
}