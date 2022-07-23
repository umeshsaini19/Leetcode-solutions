class Solution {
public:
    
    //first pinned solution c++ da for refence 
//     bool solve(vector<int>&piles ,int h,int k){
//         int hour=0;
//         for(int it:piles){
//             int val=it/k;
//             hour+=val;
//             if(it%k!=0) hour++;
//         }
//         return hour<=h;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int low=1;
//         int high=1000000000;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(solve(piles,h,mid)) high=mid-1;
//             else 
//                 low=mid+1;
//         }
//         return low;
//     }
// };
    
    //aise ques me jahan pe low left slow small jo bhi rkhna he rkhke voh jahan rukha voh apna ans
        
        
        
          int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 1000000000;
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(canEatInTime(piles, mid, h)) right = mid - 1;
            else left = mid + 1;
        }
        return left;
    }
    bool canEatInTime(vector<int>& piles, int k, int h){
        long hours = 0;
        for(int pile : piles){
             int div = pile / k;
            hours += div;
            if(pile % k != 0) hours++;
        }
        return hours <= h;
    
    }
};