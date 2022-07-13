class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        bool odd =false;
        int ans=0;
        for(auto it =mp.begin();it!=mp.end();it++){
            if(it->second%2==0){
                ans+=it->second;
            }
            else{
                if(odd){
                    ans+=it->second-1;
                }
                else {
                    ans+=it->second;
                odd=true;
            }}
        }
        return ans;
    }
};


//que me tha longest palindrone toh longest ka mtlb huya ki even jitne he sarre ayenge hi pr odd ka sirf 1 occurrencu ayega mane ki 5 7 9 kitna bhi ho sara ayega 
//ek bath aabbbbbcccdd ab isme b=5 times and c=3 times he to iska mtlb yeh ni he ki b ko lelo c ko ignore krdo c bhi 2 bari lenge uska 1 ignore krdenge yeh twist he is que me  toh solution aise he ki jo jo even bari aye sabko lelo pr jo odd pehli bari aya usko sara lelo and uske badh koi bhi odd aya usko ek kam krke lelo