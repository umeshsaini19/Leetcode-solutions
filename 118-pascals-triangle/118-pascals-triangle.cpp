class Solution {
public:
 // https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v(numRows);
        for(int i=0;i<numRows;i++){
            v[i].resize(i+1);
            v[i][0]=v[i][i]=1;
            for(int j=1;j<i;j++){
            v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }return v;
    }
};
