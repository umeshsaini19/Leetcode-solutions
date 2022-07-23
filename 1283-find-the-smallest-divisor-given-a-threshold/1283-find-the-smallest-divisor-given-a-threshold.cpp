class Solution {
public://koko eating bananas vala same sa que tha peche 
    //aise ques me jahan pe low left slow small jo bhi rkhna he rkhke voh jahan rukha voh apna ans
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=1000000;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i]/mid;
                if(nums[i]%mid!=0)sum++;
                
            }
            if(sum<=threshold)
                high=mid-1;
            else 
                low=mid+1;
        }
        return low;
    }
};

// int l=1;
//         int r=*max_element(nums.begin(),nums.end());
//         while(r>=l){
//             int mid=l+(r-l)/2;
            
//             int sum=0;
//             for(int i=0;i<nums.size();i++){
//                 sum+=nums[i]/mid;
//                 if(nums[i]%mid>0)
//                     sum++;
//             }

//             if(threshold>=sum)
//                 r=mid-1;
//             else
//                 l=mid+1;
//         }
//         return l;
//     }