class Solution {
public:
    int dfs(vector<int> tree[],int head,vector<int>& informTime) {
        int ans=0;
        for(auto child:tree[head]){
             int k=informTime[head]+dfs(tree,child,informTime);  //yeh fir mamnager ke neche vale child dfs me and infortime me manage ke inform krne ka time
       
            ans=max(ans,k);
            
        }
        return ans;
        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> tree[n];
        for(int i=0;i<n;i++) {
            if(manager[i]==-1)continue;
            tree[manager[i]].push_back(i);
        }
        return dfs(tree,headID,informTime);
    }
};

// jaise jo value -1 ke ilva ajo bhi he usko consider kr rhe he kyuki -1 he means voh khud hi manager he 
// second thing is jaise adj bnaya uske andr har bnde ka manager dedia jaise 0,1,3 ,4,5 sbka manager 2 hi he toh hum kya krenge 2 ka infirm time lelenge and age call krdenge agr manlo  3 4 level hote toh har bari senior vala bdlta toh har bari neche vale level ke liye dfs call hota