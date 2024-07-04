class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = cols-1;

        while(rowIndex < rows && colIndex >= 0){
            if(matrix[rowIndex][colIndex] > target){
                colIndex--;
            }
            else if(matrix[rowIndex][colIndex] < target){
                rowIndex++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};