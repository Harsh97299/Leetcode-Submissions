class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int ans=0;
        for(int i=0; i<=n; i++){
            if(i<n)ans^=nums[i];
            ans^=i;
        }
        return ans;
    }
}