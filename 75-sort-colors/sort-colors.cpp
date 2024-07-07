class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
            }
            else if(nums[i] == 1){
                ones++;
            }
            else{
                twos++;
            }
        }
        int i = 0;
        while(i<nums.size()){
            if(zeros!=0){
                nums[i] = 0;
                i++;
                zeros--;
            }
            else if(ones!=0){
                nums[i] = 1;
                i++;
                ones--;
            }
            else if(twos != 0){
                nums[i] = 2;
                i++;
                twos--;
            }
        }
    }
};