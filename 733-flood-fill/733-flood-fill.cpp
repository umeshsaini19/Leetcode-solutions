class Solution {
public:
    void dfs(vector<vector<int>>& image,int val,int i, int j, int newcolor){
        if(i<0 || i>=image.size()||j<0 ||j>image[0].size()-1|| image[i][j]==newcolor || image[i][j]!=val)
            return ;
        
        image[i][j]=newcolor;
        dfs(image,val,i-1,j,newcolor);
          dfs(image,val,i+1,j,newcolor);
          dfs(image,val,i,j-1,newcolor);
          dfs(image,val,i,j+1,newcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        dfs(image,val,sr,sc,color);
        return image;
    }
};