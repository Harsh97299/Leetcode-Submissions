class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int index=0;
        int[] arr = new int[2];
        for(int i: nums){
            if(map.containsKey(target-i)){
                arr[0] = map.get(target-i);
                arr[1] = index;
                return arr;
            }
            map.put(i, index++);
        }
        return arr;
    }
}