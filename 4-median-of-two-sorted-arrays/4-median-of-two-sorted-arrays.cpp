class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         if(nums2.size() < nums1.size())
            return findMedianSortedArrays(nums2,nums1);
        int l,r,cut1,cut2,l1,l2,r1,r2,total,m,n;
        m=nums1.size();
        n=nums2.size();
        total=(m+n+1)/2;
        l=0;
        r=m;
        while(l<=r){
            cut1=l+(r-l)/2;
            cut2=total-cut1;
            l1=l2=INT_MIN;
            r1=r2=INT_MAX;
            if(cut1>0) l1=nums1[cut1-1];
            if(cut2>0) l2=nums2[cut2-1];
            if(cut1>=0 && cut1<m) r1=nums1[cut1];
            if(cut2>=0 && cut2<n) r2=nums2[cut2];
            if(l1<=r2 && l2<=r1 ) {double ans;
            if((n+m)%2==0) ans=(max(l1,l2)+min(r1,r2))/2.0;
            else {
                ans=max(l1,l2);
            }return ans;
        }
        if(l1>r2){
            r=cut1-1;
            
        }
        else  l=cut1+1;
            
        }return 0;
    }
        
//         int l,r,cut1,cut2,l1,l2,r1,r2,m,n,totalSize;
//         m=nums1.size();
//         n=nums2.size();
//         totalSize = (n+m+1)/2;
        
//         l=0;
//         r=m;
//         while(l<=r){
//             cut1= l + (r-l)/2;
//             cut2 = totalSize-cut1;
//             l1=l2=INT_MIN;
//             r1=r2=INT_MAX;
//             if(cut1>0) l1=nums1[cut1-1];
//             if(cut2>0) l2=nums2[cut2-1];
//             if(cut1>=0 && cut1<m) r1=nums1[cut1];
//             if(cut2>=0 && cut2<n) r2=nums2[cut2];
            
//             if(l1<=r2 && l2<=r1){
//                 double ans;
//                 if((n+m)%2==0)
//                     ans = (max(l1,l2)+min(r1,r2))/2.0;
//                 else
//                     ans = max(l1,l2);
//                 return ans;
//             }
//             if(l1>r2)
//                 r=cut1-1;
//             else
//                 l=cut1+1;
//         }
//         return 0;
//     }
};