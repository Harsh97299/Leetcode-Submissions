class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> umap;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            umap[nums[i]]++;
        }
        for(auto it: umap){
            if(it.second == 2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};