class NumMatrix {
public:
    
    //https://youtu.be/azfqDYCAuHE in mam ki video dekhi thi yeh que ke liye easy sa hogya kam
    vector<vector<int>>arr;
    NumMatrix(vector<vector<int>>& matrix) {
        arr=matrix;
        for(int i=0;i<arr.size();i++){
            for(int j=1;j<arr[0].size();j++){
                arr[i][j]+=arr[i][j-1]; // [0][1]+[0][0]   //pehla pura first column khtm hoga prefix sum leke 
                
            }
        }  for(int i=1;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                arr[i][j]+=arr[i-1][j]; //same jaise column vasse hi row ka bhi 
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total=arr[row2][col2];// hmara jo prefix sum ayega voh yahin pe store hoga 
        int jo_subtract_krna=(row1!=0?arr[row1-1][col2]:0)+(col1!=0?arr[row2][col1-1]:0)-(row1!=0 and col1!=0 ? arr[row1-1][col1-1]:0);
        return total- jo_subtract_krna;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */