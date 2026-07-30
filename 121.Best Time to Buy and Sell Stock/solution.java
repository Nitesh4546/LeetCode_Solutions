class Solution {
    public int maxProfit(int[] prices) {
        int buy = 0, sell = 1;
        int maxprofit = 0;
        int n = prices.length;

        while(sell<n){
            if(prices[sell]>prices[buy]){
                maxprofit = Math.max(maxprofit,prices[sell]-prices[buy]);
            }else{
                buy = sell;
            }
            sell++;
        }
        return maxprofit;
    }
}