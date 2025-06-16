class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>>ans=new ArrayList<>();
        ans.add(new ArrayList<>());
        ans.get(0).add(1);
        for(int i=1; i<numRows; i++){
            ans.add(new ArrayList<>());
            for(int j=0; j<=i; j++){
                int nums1,nums2;
                if(j-1<0)nums1=0;
                else nums1=ans.get(i-1).get(j-1);
                if(j>=i)nums2=0;
                else nums2=ans.get(i-1).get(j);
                ans.get(i).add(nums1+nums2);
            }
        }
        return ans;
    }
}