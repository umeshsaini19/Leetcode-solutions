class Solution {
public: //jitna mereko smj aya que yehi puchra ki left jiska bda hoga and right bhi bda hoga vahi return krna he means ki mountain jiase 2 pe uski peak he toh peak return krnni he yeh vahi hogya rotate sorted order val akuch toh binary search toh ppkka he isme  
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=1;
        int high=arr.size()-2;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]> arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1] and arr[mid]<arr[mid+1]) low=mid+1;
            else if(arr[mid]>arr[mid+1] and arr[mid]<arr[mid-1]) high=mid-1;
        }
        return -1;
    }
};

  // int start = 1, end = n-2;
  //       while(start<=end){
  //           int mid = start + (end-start)/2;
  //           if(a[mid] > a[mid-1] && a[mid] > a[mid+1]) return mid;
  //           else if(a[mid-1] > a[mid]) end = mid-1;
  //           else start = mid+1;
  //       }
  //       return -1;