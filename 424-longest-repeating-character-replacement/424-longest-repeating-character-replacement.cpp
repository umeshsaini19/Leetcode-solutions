class Solution {
public:
    int characterReplacement(string s, int k) {
          int n=s.size();
        int i=0,j=0,ans=-1;
        int maxi=0;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            
            
            maxi=max(maxi,mp[s[j]]);
            if((j-i+1)-maxi>k){
                mp[s[i]]--;
                    i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
 // int n = s.size();
 //        int i = 0, j = 0, maxi = 0;
 //        unordered_map<char,int>mp;
 //        int ans = -1;
 //        while(j < n)
 //        {
 //            mp[s[j]]++;
 //            maxi = max(maxi, mp[s[j]]);
 //            if((j-i+1) - maxi > k){
 //                mp[s[i]]--;
 //                i++;
 //            }
 //            ans = max(ans, (j-i+1));
 //            j++;   
 //        }
 //        return ans;
    //}
//AABABBA k=1;
// 1. mp---> A-1  maxi =1   if(1-1>1) false   --- ans=1 
// 2. mp-> A-2   maxi = 2    false    ans =2 

//3. mp->A-2 ,B-1  maxi =2   if(3-2>1) false  --ans =3;
// 4. mp->A-3,B-1 maxi =3   if(4-3>1) false --ans =4;
//5 mp->A-3 B-2 maxi =3 if(5-3>1) true mp->A-2,B-2 ans =4;
// 6.mp->A->2 b-3 maxi =6-3+1>1 true mp->A-1 ,b-3 ans =4;
//7.mp-> A-> 2 b->3 maxi =7-4+1> true mp ->A->2 B-> 2 ans =4; lkhtm yaha pe 
// if(j-i+1>maxi ka mtlb he ki ek particular substrig me kitne element he jo bdlne pdene mtlb ki jaise AABA agya toh widnow ka sice 4 he and B ek toh maxi pehle se 3 he 3-3+1 =1 yani ek eleemnt bdlne vala he )