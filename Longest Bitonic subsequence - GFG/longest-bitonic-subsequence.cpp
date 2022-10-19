//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:

	    
	    //longest increasing subsequemce bhi bitonic ho skti he agr uske andr koi decreasing ni he and same longest decreasing bhi ho skti he agr uske andr koi increasing na ho
	    //yeh toh bda easy he bhai esse pehle lis krlo uske baadh jaise 1 2 5 3 2 he toh 1 2 5 lis he front se and 2 3 5 lis se back se 
	    //and 5 dono me common he toh 1 minus hoga and 
	    //1 2 3
	    //1 2 3  //in dono ko add minus 1
	    
// ans =  1 3 5  yeh upr 1 2 3 yeh lis he start se peche tak and peche se age tk and largest 5 voh ans 


	int LongestBitonicSequence(vector<int>nums)
	{
	    int n=nums.size();
	    vector<int>dpi(n,1),dpd(n,1);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(nums[j]<nums[i] && dpi[i]<1+dpi[j]){
	                dpi[i]=dpi[j]+1;
	            }
	        }
	    }
	    
	    
	    for(int i=n-1;i>=0;i--){
	        for(int j=n-1;j>i;j--){
	             if(nums[j]<nums[i] && dpd[i]<1+dpd[j]){
	                dpd[i]=dpd[j]+1;   //peche se nikal ke peche hi add krte jarhe he
	            }
	        }
	    }
	    
	   int mx=0;
	   for(int i=0;i<n;i++){
	       mx=max(mx,dpi[i]+dpd[i]-1);
	   }
	    
	   return mx;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends