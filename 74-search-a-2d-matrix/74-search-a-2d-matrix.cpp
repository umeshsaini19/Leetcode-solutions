class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=n-1;
     //   if(matrix.size()==1 and matrix[i][j]==target)return true;
        while(i<m && j>=0){
            if(matrix[i][j]>target){
                j--;
            }
         else   if(matrix[i][j]<target){
                i++;
                
            }
         else  if(matrix[i][j]==target)return true;
            }
        return false;
    }
};