class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int sum=0;
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k)
                count++;
            if(m.find(sum-k)!=m.end())   //yeh que hmne pepcoding se kra he vasse toh smj agyi h fir bhi dekhlio agr dekhna ho toh 
                                      //jaise koi sum 2 bari agya toh dono consider honge bcz shuru se first tak fer shuru se second tk second se first ka diff bhi k hi hoga
                count+=m[sum-k];
            m[sum]++;
        }
        return count;
    }
};