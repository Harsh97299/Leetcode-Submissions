class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // This is a Brute Force approach
        // TC = O(n^2), SC = O(1)
        // int profit = 0;
        // int ans = 0;
        // for(int i = 0; i<prices.size()-1; i++){
        //     for(int j = i+1; j<prices.size(); j++){
        //         profit = prices[j] - prices[i];
        //         ans = max(ans, profit);
        //     }
        // }

        // This is a better solution as it uses extra space to store the 
        // max price in the arr
        // TC = O(n), SC = O(n)
        // vector<int> aux = prices;
        // for(int i=aux.size()-2; i>=0; i--){
        //     aux[i] = max(aux[i], aux[i+1]);
        // }
        // int ans = 0;
        // for(int i = 0; i<prices.size(); i++){
        //     ans = max(ans, (aux[i]-prices[i]));
        // }

        int minSoFar = prices[0];
        int ans = 0;
        for(int i = 1; i<prices.size(); i++){
            minSoFar = min(minSoFar, prices[i]);
            int profit = prices[i] - minSoFar;
            ans = max(ans, profit);
        }
        return ans;
    }
};