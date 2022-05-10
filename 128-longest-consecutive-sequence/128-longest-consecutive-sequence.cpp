class Solution {
public:
    int longestConsecutive(vector<int>& nums) {  //hum set esleye use kr rhe he bcz manlo 1 2 3 4 5 5 ab 5 2 bar he par contribute voh krega nahi ans me so we think ki duplicateko hta hi dao and o=another is retrieval time for set is o(1);
   unordered_set<int>st;
        if(nums.size()==0) return 0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }
        int res=0;
     
        for(int i=0;i<n;i++){
                                   //like 2 ho toh hme 1 dekhna he pr 1 na huya toh yeh 1 yani true return krdea\ga
        if(st.count(nums[i]-1)==0){   //yeh starting pta krne ke liye agr value ni krti exist toh true return kredega means apna sequence us value se hi shuru hoga
              int c=1;              //count=1 esleye bcz sbse pehla element count hi horha 1,2 ,3,4 2 ke lie 1 and 3 ke liye 2 and 4                                                      ke liye 3 r 1 kahan count huya
            int curr=nums[i];                           //yeh start of sequence he ab iske +1 check krte jao
            while(st.count(curr+1)){
                c+=1;
                curr+=1;
            }
            res=max(res,c);
        }
        }
        
    return res;
    
    }
};
//    
//         int count=1, maxCount=1;  //at minimum we'll have 1 as the length
//     sort(nums.begin(), nums.end());
    
//     for(int i=0; i<nums.size()-1; i++){
//         if(nums[i]==nums[i+1]-1) count++;
//         else if(nums[i]==nums[i+1]) continue;  //skipping the duplicate values
//         else {
//             maxCount=max(count,maxCount);
//             count=1;
//         }
//     }
//     maxCount=max(count,maxCount);  //for handling the edge case, where you may reach the end of the vector incrementing 'count'. In that case 'maxCount' won't be updated. That's why.
    
//     return maxCount
// unordered_set<int>s;
//         int n = arr.size();
//         for(int i=0; i<n; i++)
//         {
//             s.insert(arr[i]);
//         }
        
//         int ans = 0;
//         for(int i=0; i<n; i++)
//         {
//             if(!s.count(arr[i]-1))
//             {
//                 int currnum = arr[i];
//                 int c = 1;
//                 while(s.count(currnum+1))
//                 {
//                     currnum += 1;
//                     c+=1;
//                 }
//                 ans = max(ans, c);
//             }
//         }
//         return ans;