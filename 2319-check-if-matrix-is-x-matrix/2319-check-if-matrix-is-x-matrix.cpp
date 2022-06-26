class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
      int m = grid.size();
        
        for (int i=0;i<m;i++) {
            for (int j=0;j<m;j++) {
                if (i == j or j == m-i-1) {     //i==j for 0 ,0 and m-1 and m-1 diagonal ke liye 
                                                   // j=m-i-1== i=0 toh j=m-1 and jab j=m-1 toh i=0 in diagomal ke liye
                    //yeh diagonal nikalne ki scheme hoti he
                        if (grid[i][j] == 0)
                            return false;
                } else {
                    if (grid[i][j] != 0)
                        return false;
                }
            }
        }
        
        return true;
    }
};