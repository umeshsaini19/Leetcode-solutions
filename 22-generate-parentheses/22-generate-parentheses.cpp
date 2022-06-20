class Solution {
public:
    void solve(int open,int close,string op,vector<string>&ans){
        
        ///jaise tree diagram bnaya ek bath pta lgi leaf yani jab dono khtm honge tab output milri and open bracket toh hmesh arhi hi he jab tk zero na hho pr close bracket kbhi ati kabhi ni toh close bracket tbhi ayegi jab close bracket ka count open se jada hoga tb dono possibilit hogi open v ayei and close bhi 
        if(open==0 and close==0)
        {
            ans.push_back(op);
            return;
        }
        if(open!=0){
            string op1=op;
            op1.push_back('(');
            solve(open-1,close,op1,ans);
        }
        if(close>open){
            string op2=op;
            op2.push_back(')');
            solve(open,close-1,op2,ans);
        }
        return ;
    }
    vector<string> generateParenthesis(int n) {
    vector<string>ans;
        string op="";
        int open =n;
        int close=n;
        solve(open,close,op,ans);
        return ans;
    }
};