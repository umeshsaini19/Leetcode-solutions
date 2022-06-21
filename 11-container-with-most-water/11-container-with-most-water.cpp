class Solution {
public:
    int maxArea(vector<int>& height) {
      int n=height.size();
        int res=0;
        int area=0;
        int l=0;
        int r=n-1;
        while(l<r){
            area=(r-l) *min(height[l],height[r]); //  area hogya height * width width nikla r-l se 
            res=max(area,res);
             
            if(height[l]<height[r]){            //jiske kam hogi usskse agye hi ajyenge max dundne
                l++;
            }
            else r--;
        }
        return res;}
};