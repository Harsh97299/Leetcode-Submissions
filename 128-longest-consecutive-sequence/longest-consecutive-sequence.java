class Solution {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer>h=new HashSet<>();
        for(int i=0; i<nums.length; i++){
            h.add(nums[i]);
        }
        int l=0;
        for(int it: h){
         int count=1;
         int x=it;
         if(h.contains(x-1))continue;
         while(h.contains(x+1)){
            count++;
            x++;
         }
         l=Math.max(l,count);   
        }
        return l;
    }
}