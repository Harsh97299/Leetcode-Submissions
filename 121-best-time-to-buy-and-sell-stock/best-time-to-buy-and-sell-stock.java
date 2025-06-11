class Solution {
    public int maxProfit(int[] prices) {
        int buy = prices[0];
        int sell = prices[0];
        int profit = 0;
        for(int i=1; i<prices.length; i++){
            if(prices[i]<buy){
                buy=prices[i];
                sell = buy;
            }
            if(prices[i]>sell){
                sell = prices[i];
            }
            int difference = sell-buy;
            if(profit<difference){
                profit = difference;
            }
        }
        return profit;
    }
}