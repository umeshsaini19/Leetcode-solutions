class Solution {
public:
//      void wiggleSort(vector<int>& nums) {
//         int n= nums.size();
//          priority_queue<int>q(nums.begin(),nums.end());
         
//          for(int i=1;i<n;i+=2){
//              nums[i]=q.top();
//              q.pop();
//          }
         
//           for(int i=0;i<n;i+=2){
//              nums[i]=q.top();
//              q.pop();
//          }
         
         //2 solution krdiye he isme dono bdia he dekhlio 
         
         
         
 void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        vector<int> temp(n);
        int i = 1, j = n-1;
        while(i <nums.size()){
            temp[i] = nums[j];
            i+=2;
            j--;
        }
        i = 0;
        while(i<nums.size()){
            temp[i] = nums[j];
            i+=2;
            j--;
        }
        for(int it =0; it<n;it++){
            nums[it] = temp[it];
        }
    }
};