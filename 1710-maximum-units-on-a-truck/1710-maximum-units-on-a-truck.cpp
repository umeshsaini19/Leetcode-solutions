class Solution {
public:
    static bool myfunction(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
	    //custom sort (in increasing order of numberOfUnitsPerBox as we have to return  maximum total number of units )
        sort(boxTypes.begin(),boxTypes.end(),myfunction);
		//greedily pick boxes till capacity is full
        int ans=0;
        for(auto box: boxTypes){
            int x=min(box[0],truckSize);  //choose minimum boxes from available boxes and capacity left
           // cout<<x<<" ";
            ans+=(x*box[1]); //adding units in ans
           //  cout<<ans<<" ";
           // cout<<box[1]<<" ";
           truckSize-=x;  //reduce the capacity
            if(!truckSize) break;  //capacity full
        }
        return ans;
    }
};

//isme lgi he greedy approach jaise jis array me no of boxes jada he usko pehle hi lenge
//and aise add krte jayenge and sort krdenge acc to second element //jaise truck me 1 jagah he toh 1*1 hoga last me first test case me 3 jagah hoti toh 3*1 hota 