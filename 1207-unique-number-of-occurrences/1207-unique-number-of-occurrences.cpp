class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        unordered_set<int>ans;
        for(auto it: mp){
            ans.insert(it.second);
        }
        return ans.size()==mp.size()?true:false;
    }
};

//dekho last line hi ni smj ayegi in future bhi toh last line ka mtlb he ki jaise map ke andr manlo 1->3,2->2,3->1 and set me gya 3,2,1,toh size equal he pr dekho agr 1->2 hota ad 2->2 and 3->1 toh set me bs 2,1 jata kyuki 2 repeat he toh size equl ni hota and game khtm 


