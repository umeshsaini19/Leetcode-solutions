class Solution {
public:
    
    //iske peche intution yehi he ki hme pta he bnary search sorted pe hi lgta he so hmne pehle mid find krlia fir uske badh pehle dekha sorted konca he jo vala part sorted he uski trf hoge hum log and check krli aagr usme ni he toh unsorted me jake firse sorted hi dunda hmne and usme check kiya agr usme he toh thik ni he toh unsorted me jake firse ssorted dundo
    int search(vector<int>& nums, int target) {
         int low =0 , high = nums.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>=nums[low])
            {
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;}
                else {
                    low=mid+1;
                }
            }
            else {
                if(nums[mid]<=target && nums[high]>=target){
                    low=mid+1;}
                else{
                    high=mid-1;
                }
            }
        }
            return -1;
        }
};