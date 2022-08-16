class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int> &nums) {
        
        vector<int> path;
        vector<bool> visited(nums.size() , false);
        dfs(nums , path , visited);
        
        return res;
    }
    void dfs(vector<int> &nums , vector<int> &path , vector<bool> &visited)
    {
        if(path.size() == nums.size())
        {
            res.push_back(path);
            return;
        }
        
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(visited[i] == false)
            {
                visited[i] = true;
                path.push_back(nums[i]);
                
                dfs(nums , path , visited);
                
                path.pop_back();   // backtrack
                visited[i] = false;// backtrack
            }
        }
    }
};