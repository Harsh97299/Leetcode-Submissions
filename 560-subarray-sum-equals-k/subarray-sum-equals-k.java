class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        mp.put(0,1);
        int sum=0,count=0;
        for(int i=0; i<nums.length; i++){
            sum+=nums[i];
            int t=sum-k;
            count+=mp.getOrDefault(t,0);
            mp.put(sum,mp.getOrDefault(sum,0)+1);
        }
        return count;
    }
}