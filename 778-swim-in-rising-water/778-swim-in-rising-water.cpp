class Solution {
public:
    
      bool isSafe(int x, int y, int n){
        if(x>=0 && x<n && y>=0 && y<n){
            return true;
        }
        return false;
    }
    int swimInWater(vector<vector<int>>& grid) {
         priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> q;
        
    vector<vector<int>> dir= {{0,-1}, {-1,0}, {0,1}, {1,0}};
    int ans=0;
    int n=grid.size();
    int m=grid[0].size();
          vector<int> visited(n*n, false); 
     
        q.push(make_pair(grid[0][0], make_pair(0,0)));
          visited[grid[0][0]] = true;
              pair<int, pair<int,int>> res;
    while(q.size())
    {
        auto res=q.top();
        q.pop();
        ans=max(ans,res.first);
        
        int x=res.second.first;
        int y=res.second.second;
        
    
            
        
        if(x == n-1 && y == m-1){
                break;
            }
        
       // move to next row
             if(isSafe(x+1,y,n) && visited[grid[x+1][y]]==false){
                visited[grid[x+1][y]] = true;
                q.push(make_pair(grid[x+1][y], make_pair(x+1,y)));
            }
            // move to previous row
            if(isSafe(x-1,y,n) && visited[grid[x-1][y]]==false){
                visited[grid[x-1][y]] = true;
                q.push(make_pair(grid[x-1][y], make_pair(x-1,y)));
            }
            // move to next column
            if(isSafe(x,y+1,n) && visited[grid[x][y+1]]==false){
                visited[grid[x][y+1]] = true;
                q.push(make_pair(grid[x][y+1], make_pair(x,y+1)));
            }
            // move to previous column
            if(isSafe(x,y-1,n) && visited[grid[x][y-1]]==false){
                visited[grid[x][y-1]] = true;
                q.push(make_pair(grid[x][y-1], make_pair(x,y-1)));
            }
        }
        
        return ans;
    }
       
    
    
};