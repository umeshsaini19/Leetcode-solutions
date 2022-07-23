class Solution {
public://yeh dekhne se pehle neche brute force he voh dekhna fir ispe ana and this one is dekhke smj a jane vala soltuon is the
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int,int>>v;
        for(int i=0;i<intervals.size();i++){
            v.push_back({intervals[i][0],i});
        }
        sort(v.begin(),v.end()); //tan ki binary search lg ske iske andr
     
        
        vector<int>ans;
        for(int i=0;i<intervals.size();i++){
            int to_search=intervals[i][1];
        int ansval=-1;
               int low=0;
        int high=intervals.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(v[mid].first>=to_search){
                high=mid-1;
                ansval=v[mid].second;}
                else if(v[mid].first<to_search){
                    low=mid+1;
                    
                }
                
            } ans.push_back(ansval);
        }return ans;
           
    
        
        
//          vector<int>ans;
//         vector<pair<int,int>>val;
//         for(int i=0;i<intervals.size();i++)
//         {
//             val.push_back({intervals[i][0],i});
//         }
//         sort(val.begin(),val.end());
//         for(int i=0;i<intervals.size();i++)
//         {
//             int to_search=intervals[i][1];
//             int ansval=-1;
//             int l=0, r=val.size()-1;
//             while(l<=r)
//             {
//                 int m=l+(r-l)/2;
//                 if(val[m].first>=to_search)
//                 {
//                     ansval=val[m].second;
//                     r=m-1;
//                 }
//                 else if(val[m].first<to_search)
//                 {
//                     l=m+1;
//                 }
//             }
//             ans.push_back(ansval);
//         }
//         return ans;
// 		}
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        //self explained mane ki  hme jaise [[3,4],[2,3],[1,2]]  yeh dia toh hme 4 se bda 3,2,1 yani 0th index pe dundma he and voh bda sbse min ho bdo me se like 2 ke liye 3 and 2 he pr hmne 2 chose kiya kyuki sbse min he voh yehi que he toh i ko fix krke sbke j 0 dundh lo and jo min aye bs use ans bnalo

//         vector<int>ans;
//            if(intervals.size()==1)    return {-1};
//         for(int i=0;i<intervals.size();i++){
//             int min_start=INT_MAX;
//             int indx=-1;
//             for(int j=0;j<intervals.size();j++){
//                 if(i!=j and intervals[j][0]>=intervals[i][1] and min_start>intervals[j][0]){
//                     indx=j;
//                     min_start=intervals[j][0];
//                 }  }
//                 ans.push_back(indx);
          
//         }
//         return ans;
 

   
//         vector<int> v;
//         int n= intervals.size();
        
//         if(n==1)    return {-1};
        
       
        
//         for(int i=0; i<n; i++)
//         { int ele= INT_MAX;
//         int idx= -1;
            

//             for(int j=0; j<n; j++) 
//             {
//                 if(i != j && intervals[j][0] < ele && intervals[j][0] >= intervals[i][1])
//                 {
//                     ele= intervals[j][0];
//                     idx= j;
//                 }
//             }
         
          
//                 v.push_back(idx);
            
//         }
        
//         return v;
    }
       
};