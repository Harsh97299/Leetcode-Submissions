class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int count1=0,count2=0,prev1=Integer.MIN_VALUE,prev2=Integer.MIN_VALUE;
        boolean flag1=false,flag2=false;
        for(int i=0; i<nums.length; i++){
            if(count1==0 && prev2!=nums[i]){
                prev1=nums[i];
                flag1=true;
                count1++;
            }
            else if(prev1==nums[i]){
                count1++;
            }
            else if(count2==0){
                prev2=nums[i];
                flag2=true;
                count2++;
            }
            else if(prev2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;count2=0;
        for(int i=0; i<nums.length; i++){
            if(prev1==nums[i])count1++;
            if(prev2==nums[i])count2++;
        }
        List<Integer>ans=new ArrayList<>();
        if(count1>nums.length/3 && flag1)ans.add(prev1);
        if(count2>nums.length/3 && flag2)ans.add(prev2);
        return ans;
    }
}