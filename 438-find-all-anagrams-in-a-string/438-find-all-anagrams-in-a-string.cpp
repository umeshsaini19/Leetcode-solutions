class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
             int len_s = s.size();
        int len_p = p.size();
        
        if(len_s < len_p) return {};   //agr p bda he s se toh kaise possible hoga 
        
        vector<int> p_freq(26,0);
        vector<int> window(26,0);
        
        //first window
        for(int i=0;i<len_p;i++){
            p_freq[p[i]-'a']++;   //yeh sirf pehle 3 add krne ke liye 
            window[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(p_freq == window) ans.push_back(0);  //pehle 3 ko check kiya ni he 
        
        for(int i=len_p;i<len_s;i++){   //yeh 3 se last tak k eliye ki pehla htate jao i-len krke and s[i add krte jao ]
            window[s[i-len_p] - 'a']--;
            window[s[i] - 'a']++;
            
            if(p_freq == window) ans.push_back(i-len_p+1);  //agr addd krne ke badh dono match  hote he jo bngai baten krdo ans me push
        }
        return ans;
    }
};