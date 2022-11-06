class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int res=INT_MIN;
        while(l<r){
            int ans= (r-l)*min(height[l],height[r]);
            res=max(res,ans);
            
            if(height[l]<height[r]){
                l++;
            }
            else
            r--;
        }
        return res;
    }
};