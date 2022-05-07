class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     // striver bhaiya brute force smj gya me hu ab   https://takeuforward.org/data-structure/set-matrix-zero/
        int rows = matrix.size(), cols = matrix[0].size();
  vector < int > dummy1(rows,-1), dummy2(cols,-1);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 0) {
        dummy1[i] = 0;   // video dekhne ki jrurat ni he striver bhaiya ka link he 3no approach dekhlena 
        dummy2[j] = 0;
      }
    }

  }
          for (int i = 0; i < rows; i++) {
            for(int j=0;j<cols;j++){
                if(dummy1[i]==0 || dummy2[j]==0){
                    matrix[i][j]=  0;
                }
            }
        }
    
  //       for (int i = 0; i < rows; i++) {
  //   for (int j = 0; j < cols; j++) {
  //     if (dummy1[i] == 0 || dummy2[j]==0) {
  //       matrix[i][j] = 0;
  //     }
  //   }
  // }

}
    
};