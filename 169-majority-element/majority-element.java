class Solution {
    public int majorityElement(int[] nums) {
     int count=0,prev=Integer.MIN_VALUE;
     for(int i=0; i<nums.length; i++){
        if(count==0){
            prev=nums[i];
            count++;
        }
        else if(nums[i]==prev)count++;
        else count--;
     }
     return prev;   
    }
}