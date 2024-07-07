class Solution {
public:
    bool canEatInTime(vector<int>& piles, int k, int h){
        double hours = 0;
        for(int pile : piles){
            int div = pile / k;
            hours += (double)div;
            if(pile % k != 0) hours++;
        }
        return hours <= (double)h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxBananas = 0;
        for(int i=0; i<piles.size(); i++){
            maxBananas = max(maxBananas, piles[i]);
        }
        int start = 1;
        int end = maxBananas;
        int mid;
        while(start<=end){
            mid = start + (end-start)/2;
            int ans;
            if(canEatInTime(piles, mid, h)){
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        return start;
    }
};