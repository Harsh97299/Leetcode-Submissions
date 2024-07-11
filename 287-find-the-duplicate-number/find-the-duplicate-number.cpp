class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> dup(nums.size()+1, 0);
        for(int i=0; i<nums.size(); i++){
            if(dup[nums[i]] == 0){
                dup[nums[i]]++;
            }
            else{
                return nums[i];
            }
        }
        return 0;
    }
};