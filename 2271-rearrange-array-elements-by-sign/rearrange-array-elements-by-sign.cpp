class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        int n = nums.size();
        vector<int> ans = nums;
        for(int i = 0; i<ans.size(); i+=2){
            if(nums[pos]!=0){
                while(pos<n && nums[pos]<0){
                    pos++;
                }
            }
            ans[i] = nums[pos];
            pos++;
        }
        for(int i = 1; i<ans.size(); i+=2){
            if(nums[neg]!=0){
                while(neg<n && nums[neg]>=0){
                    neg++;
                }
            }
            ans[i] = nums[neg];
            neg++;
        }
        return ans;
    }
};