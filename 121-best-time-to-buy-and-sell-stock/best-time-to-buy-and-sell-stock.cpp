class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyPrice = INT_MAX;
        int temp;
        for(int i = 0; i<prices.size(); i++){
            if(buyPrice > prices[i]){
                buyPrice = prices[i];
            }
            temp = prices[i] - buyPrice;
            if(temp > maxProfit){
                maxProfit = temp;
            }
        }
        return maxProfit;
    }
};