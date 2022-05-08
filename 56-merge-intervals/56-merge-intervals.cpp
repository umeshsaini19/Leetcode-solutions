class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
   vector<vector<int>>ans;
        if(intervals.size()==0) return ans;
        sort(intervals.begin(),intervals.end());
        int j=0;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(ans[j][1]>=intervals[i][0]){   //yeh comparsion dyan rkhne he ans se hogya max vala v and and[j][1] vala bhi
                ans[j][1]=max(ans[j][1],intervals[i][1]);
            }
            else{
                j++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
        
    //       vector<vector<int>> ans;
    //     if(intervals.size()==0)return ans;
    // sort(intervals.begin(),intervals.end());
    //     ans.push_back(intervals[0]);
    //     int j=0;
    //     for(int i=1;i<intervals.size();i++)
    //     {
    //         if(ans[j][1]>=intervals[i][0])
    //             ans[j][1]=max(ans[j][1],intervals[i][1]);
    //         else
    //         {
    //             j++;
    //             ans.push_back(intervals[i]);
    //         }
    //     }
    //     return ans;
    }
};