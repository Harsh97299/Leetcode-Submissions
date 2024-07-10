class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int n = nums.size()/3 + 1;
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            umap[nums[i]]++;
            if(umap[nums[i]] == n){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};