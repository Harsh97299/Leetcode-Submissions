class Solution {
    public int maxProfit(int[] prices) {
        int buy=prices[0], sell=0;
        for(int i=0; i<prices.length; i++){
            int diff=prices[i]-buy;
            if(sell<diff)sell=diff;
            if(buy>prices[i])buy=prices[i];
        }
        return sell;
    }
}