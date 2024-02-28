class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Division Method
        vector<int> ans;
        int temp = 1;
        int zeros = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
            }
            else{
                temp *= nums[i];
            }
        }
        if(zeros == 0){
            for(int i = 0; i<nums.size(); i++){
                ans.push_back(temp/nums[i]);
            }
        }
        else if(zeros == 1){
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] == 0){
                    ans.push_back(temp);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        else{
            for(int i = 0; i<nums.size(); i++){
                ans.push_back(0);
            }
        }
        return ans;
    }
};