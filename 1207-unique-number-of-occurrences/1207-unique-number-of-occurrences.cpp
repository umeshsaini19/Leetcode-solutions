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


//yeh he mentos jindagi 

//  vector<int> ans;
//         int size = arr.size();
//         int i = 0;
//         sort(arr.begin(),arr.end());
//         while(i<size){
//             int count = 1;
//             for(int j =i+1;j<size;j++){
//                 if(arr[i]==arr[j]){
//                     count++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             ans.push_back(count);
//             i = i+count;
//         }
//         size = ans.size();
//         sort(ans.begin(),ans.end());
//         for(int i = 0;i<size-1;i++){
//             if(ans[i]==ans[i+1]){
//                 return false;
//             }
//         }
//         return true;   
//     }