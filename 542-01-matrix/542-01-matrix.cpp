class Solution {
public:
    bool check(int i,int j,int row,int col){
        if(i<0||j<0||i>row-1||j>col-1) return false;
        else return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));   //AISE MATRXI CREATE HOTI HE
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    ans[i][j]=0;
                }
            }
        } 
        int row=n;  //yeh bs timepass ke liye likha h e kyu kiupr bdlna pdta mereko
        int col=m;
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            
            if(check(i+1,j,row,col) and ans[i+1][j]==-1)
            {
                q.push({i+1,j});
                ans[i+1][j]=ans[i][j]+1;
            }
            
             if(check(i-1,j,row,col) and ans[i-1][j]==-1)
            {
                q.push({i-1,j});
                ans[i-1][j]=ans[i][j]+1;
            }
             if(check(i,j+1,row,col) and ans[i][j+1]==-1)
            {
                q.push({i,j+1});
                ans[i][j+1]=ans[i][j]+1;
            } if(check(i,j-1,row,col) and ans[i][j-1]==-1)
            {
                q.push({i,j-1});
                ans[i][j-1]=ans[i][j]+1;
            }
            q.pop();
        }
        return ans;
    }
    
    //code vasse intitv he dekh kr hi smj a jayega yeh and 
};