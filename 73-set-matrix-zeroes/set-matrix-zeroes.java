class Solution {
    public void setZeroes(int[][] matrix) {
        int r=matrix.length;
        int c=matrix[0].length;
        // int[]row=new int[r];
        // int[]col=new int[c];
        // for(int i=0; i<r; i++){
        //     for(int j=0; j<c; j++){
        //         if(matrix[i][j]==0){
        //             row[i]=-1;
        //             col[j]=-1;
        //         }
        //     }
        // }
        boolean iz=false;
        boolean jz=false;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                
                if(matrix[i][j]==0){
                    if(i==0){
                        iz=true;
                    }
                    if(j==0){
                        jz=true;
                    }
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    
                    
                }
            }
        }
        for(int i=1; i<r; i++){
            if(matrix[i][0]==0){
                for(int j=0;j<c;j++){
                    matrix[i][j]=0;
                }
            }

            }
        for(int i=1; i<c; i++){
            if(matrix[0][i]==0){
                for(int j=1;j<r;j++){
                    matrix[j][i]=0;
                }
            }

            }

            if(iz){
                for(int i=0; i<c; i++){
                matrix[0][i]=0;
                // System.out.println("set ho gaya");
                }
            }
            if(jz){
               for(int i=0; i<r; i++){
                matrix[i][0]=0;
                System.out.println("set ho gaya");
                } 
            }
        // for(int i=0; i<r; i++){
        //     for(int j=0; j<c; j++){
        //         if(matrix[i][j]==0){
        //             for(int i=0;)
        //         }
        //     }
        // }
    }
}