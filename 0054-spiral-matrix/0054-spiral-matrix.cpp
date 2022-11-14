class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0,right=m-1,left=0,buttom=n-1;
        int direction=1;
        vector<int>v;
        while(left<=right&&top<=buttom){
            if(direction==1){
                for(int i=left;i<=right;i++)
                    v.push_back(matrix[top][i]);
                direction=2;
                top++;
            }
            else if(direction==2){
                for(int i=top;i<=buttom;i++)
                    v.push_back(matrix[i][right]);
                direction=3;
                right--;
                
            }
            else if(direction==3){
                for(int i=right;i>=left;i--)
                    v.push_back(matrix[buttom][i]);
                direction=4;
                buttom--;
            }
            else if(direction=4){
                for(int i=buttom;i>=top;i--)
                    v.push_back(matrix[i][left]);
                direction=1;
            left++;
            }
        }
        return v;
    }
};