class Solution {
public:
    bool binarySearch(vector<int> arr, int target){
        int start = 0;
        int end = arr.size()-1;
        int mid;
        while(start <= end){
            mid = start + (end-start)/2;
            if(arr[mid] < target){
                start = mid+1;
            }
            else if(arr[mid] > target){
                end = mid-1;
            }
            else{
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i<matrix.size(); i++){
            if(matrix[i][0] <= target && matrix[i][matrix[i].size()-1] >= target){
                if(binarySearch(matrix[i], target)){
                    return true;
                }
            }
        }
        return false;
    }
};