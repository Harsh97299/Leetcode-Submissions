class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer>ans=new ArrayList<>();
        int str=0,stc=0,endr=matrix.length,endc=matrix[0].length;
        while(str<endr && stc<endc ){
            for(int j=stc; j<endc; j++){
                ans.add(matrix[str][j]);
            }
            str++;
            for(int i=str; i<endr; i++){
                ans.add(matrix[i][endc-1]);
            }
            endc--;
            if(str<endr){
                for(int j=endc-1; j>=stc; j--){
                    System.out.println("3");
                    ans.add(matrix[endr-1][j]);
                }
            }
            endr--;
            if(stc<endc){
            for(int i=endr-1; i>=str; i--){
                System.out.println("4");
                ans.add(matrix[i][stc]);
            }
            stc++;
            }
        }
        return ans;
    }
}