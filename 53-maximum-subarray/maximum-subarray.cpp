class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;
        int nmax=INT_MIN;
        for (int i = 0; i<nums.size(); i++){
            nmax = max(nums[i],nmax);
            currentSum += nums[i];
            if(currentSum<0){
                currentSum = 0;
            }
            maxSum = max(currentSum,maxSum);
        }
        if(maxSum==0){
            return nmax;
        }
        return maxSum;
    }
};