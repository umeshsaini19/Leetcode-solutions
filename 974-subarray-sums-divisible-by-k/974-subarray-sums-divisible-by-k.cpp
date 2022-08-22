class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
 
        unordered_map<int,int>mp;
               mp[0]++;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0) rem+=k;
            if(mp.find(rem)!=mp.end())
                count+=mp[rem];
            
                mp[rem]++;
        
        }
        return count;
    }
};

//jaise subarray sum equals to k he same vasse he usme sum dundte he isme remainder dund rhe he agr koi remainder pehle agaya he tph uski freq add krlo ans me and fer update krdo mp me new frequency jo ai and jo if(rem<0 ) he yeh remainder ki property he ki agr remainder less then zero aye toh jise module kiya uske sath add krdo