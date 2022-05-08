class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        for(int i = 0;i<n;i++){
//         nums1[m+i] = nums2[i] ;
//     }
//     sort(nums1.begin(),nums1.end());
    
// }

// };
        
        
      //    https://takeuforward.org/data-structure/merge-two-sorted-arrays-without-extra-space/
        
                  // -->Brute force approach code ni he 
                 //   Make an arr3 of size n+m.
                // Put elements arr1 and arr2 in arr3.
                // Sort the arr3.
                // Now first fill the arr1 and then fill remaining elements in arr2. 

        
        
int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k--]=nums1[i--];
              
            }
            else
            {
                nums1[k--]=nums2[j--];
               
            }
        }
        while(j>=0)
        {
            nums1[k--]=nums2[j--];
        }
        while(i>=0)
        {
            nums1[k--]=nums1[i--];
          
        }
    }
    };
//  int i=0,j=0,k=n-1;
// 	    while(i<=k && j<m){
// 	        if(arr1[i]<arr2[j])
// 	        i++;
// 	        else{
// 	            swap(arr2[j++],arr1[k--]);
// 	        }
// 	    }
// 	    sort(arr1, arr1 + n);
   
//     sort(arr2, arr2 + m);
// 	}
// };