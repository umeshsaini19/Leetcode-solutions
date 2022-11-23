class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
//         for(int i = 0;i<nums.size();i++){
//         for(int j = i+1;j<nums.size();j++){
//             for(int k = j+1;k<nums.size();k++){
                    
//                     if(nums[i] < nums[j] && nums[i] < nums[k] && nums[j]<nums[k]){
//                         return true;
//                     }
//             }
//         }
//     }
//     return false;
        
        
        
        if(nums.size()<3) return false; 
        int left=INT_MAX;
        int mid=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid) return true;
            else if(nums[i]>left and nums[i]<mid) mid=nums[i];
            else if(nums[i]<left) left=nums[i];
        }
        return false;
}
    
};//yeh hi ek method he upr vala brute force neche vala optimal bs jo condition he vahi check krlo and ans a jeyag jayaz c baathe cond bhi aisi he que e acc hi 

//brute force

// low<mid<high
// our intension is that make low smaller as can possible
// make mid smaller as can possible but it should be greater than low
// if we found any element greater than mid than we get triplet
// 1.Traverse whole array
// 2.if nums[i] <low means we can update low bcz we found new low .
// 3.if nums[i] >low && nums[i]<mid it will be new mid
// 4.if nums[i] >mid it means nums[i] is largest than mid and it is als greater than low
// so we get nums[i] as high so return true