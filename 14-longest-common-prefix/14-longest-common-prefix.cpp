class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0) return "";
        sort(strs.begin(),strs.end());
    string a=strs[0];
        string b=strs[n-1];
        string ans="";
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i])
                ans+=a[i];
        
        else break;
        
    }
        
        
        
        
        
//        int n = strs.size();
//         if(n==0) return "";
        
//         string ans  = "";
//         sort(begin(strs), end(strs));
//         for(int i=0;i<n;i++){
//             cout<<strs[i]<<" ";
//         }
//         string a = strs[0];
//         string b = strs[n-1];
//        cout<<a<<b<<endl;
        
//         for(int i=0; i<a.size(); i++){
//             if(a[i]==b[i]){
//                 ans = ans + a[i];
//                cout<<ans;
//             }
//             else{
//                 break;
//             }
//         }
        
        return ans;
    }
};
//Logic superfantastic he dekho hmne apas me sort krdia toh jo sbse chote me lga hoga sbse age and jisme letter bde honge voh sbse last me toh hum last and fast ko compare krle kyuki jistne lement last ke first me honge atleast utne toh last se pehle ssabme honge hi tbhi voh last pe he and tbhi ek first pe he
