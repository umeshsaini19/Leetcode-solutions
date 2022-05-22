class Solution {
public:
    
    //sort krna bhi jruri he startinh me kais ev value a skti he
    vector<vector<int>>ans;
    set<vector<int>>s;
    void solve(vector<int>input,vector<int>output={}){
        if(input.size()==0){
            if(s.find(output)==s.end()){
                s.insert(output);
                ans.push_back(output);
            }return ;
        }
        vector<int>op1=output;
        vector<int>op2=output;
        op1.push_back(input[0]);
        input.erase(input.begin()+0);
        solve(input,op1);
        solve(input,op2);
        
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(), nums.end());  // 1,2 and 2,1 both are same in case of unique subsets and hum sort krke 1,2,2 ek sath krdenge ki 1,2 ek bari hi aye agr bech me rhega 2,1,2 toh 2,1 bhi ayega and 1,2 bhi ayega and acc to set both are doff and dono print ho jayenge 
        solve(nums);
        return ans; 
    }
};

//     vector<vector<int>>ans;
//     set<vector<int>>s;
//     void solve(vector<int>input, vector<int>output){
//         if(input.size() == 0){            //jab input ki lenght zero horhi he tbhi output me ek ans milra he 
//             if(s.find(output) == s.end()){   //;last tk punch jayenge hme nahi tb yeh 1 hogi 
//                 s.insert(output);
//                 ans.push_back(output);   
//             }
//             return;
//         }
//         vector<int>op1 = output, op2 = output;
//         op1.push_back(input[0]);
//         input.erase(input.begin() + 0);
//         solve(input, op1);
//         solve(input, op2);   
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         solve(nums, {});
//         return ans; 
    
//     }
// };