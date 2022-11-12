class Solution {
public:
    
    //isko codebox se kiya pr aise tree me smj me na ayega khud se draw krega toh smj me ayega ki i ki movemenet kaise ho rhi he and code yehi he ki tumne ek visited lelia he jo  jaise har iteration pe bta dega ki yeh tumne pehle visit kiya he toh ab age dekhlo kjaise ki first me 1 2 3 krlia jaise backtrak huya and sbse last step pe aya toh i =2 tha kyuki 1 2 3 and uke baad jab next iteration hogi  toh i=2 yani 2 ko jab remove krega toh 1 3 2 bnadega and fir next iteration me i = 1 hoga kyuki 2 last me aise kam kr rha he 
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
                cout<<i<<" ";
                cout<<path[i]<<" ";
                path.pop_back();   // backtrack
                visited[i] = false;// backtrack
            }
        }
    }
};