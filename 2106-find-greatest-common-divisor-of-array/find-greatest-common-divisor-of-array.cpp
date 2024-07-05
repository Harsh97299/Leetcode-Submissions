class Solution {
public:
    int gcd(int minNum, int maxNum){
        int ans = 0;
        for(int i = 1; i <= minNum; i++){
            if(minNum%i == 0 && maxNum%i == 0){
                ans = i;
            }
        }
        return ans;
    }
    int findGCD(vector<int>& nums) {
        int minNum = INT_MAX;
        int maxNum = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            if(minNum>nums[i]){
                minNum = nums[i];
            }
            if(maxNum<nums[i]){
                maxNum = nums[i];
            }
        }
        int ans = gcd(minNum, maxNum);
        return ans;
    }
};