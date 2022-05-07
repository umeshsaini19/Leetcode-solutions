class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
     for(int i=0;i<n;i++){
         for(int j=0;j<i;j++){
             swap(matrix[i][j],matrix[j][i]);  // transpose krne ke badh[[1,4,7]],[2,5,8],[3,6,9]]  te ehnu resver krde hi ans
             
         }
     }
      for(int i=0;i<n;i++){    //row wise reverse krlo fir
        reverse(matrix[i].begin(),matrix[i].end());}
        // for(int i=0;i<n;i++){
        // int low=0,high=n-1;
        //     while(low<=high){
        //         swap(matrix[i][low],matrix[i][high]);
        //         low++;
        //         high--;
        //     }
        // }
    }
};