class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int[] sol = new int[2];
        for(int i=0; i<nums.length; i++){
            int ans = target - nums[i];
            if(!map.containsKey(ans)){
                map.put(nums[i], i);
            }
            else{
                sol[0]=map.get(ans);
                System.out.println(sol[0]);
                sol[1]=i;
                return sol;
            }
        }
        return sol;
    }
}