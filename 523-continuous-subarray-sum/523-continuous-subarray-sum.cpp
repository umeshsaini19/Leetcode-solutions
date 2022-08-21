class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem==0 and i>0) return true;
            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem]>=2)
                    return true;
            }
            else {
                mp[rem]=i;
            }
        }
        return false;
    }
};

//dekh simple jo hum two sum pair sum vale krte he logic same he uska he que yeh ki atleast 2 continours position check kro and dekh ki unka sum k ke multiple he ya ni so hmne shuru se check kiya and agr direct sum se milra k ka multiply toh check krlia and return true and ni milra toh jo rem ab aya voh agr pehle bhi aya he toh bech ki jo value he voh k ka multiple hi he ya k khud ka jaise normal two sum me hota he ki sum dubara a jaye k se minus krne me toh pta lg jata he ki k pehle aya tha