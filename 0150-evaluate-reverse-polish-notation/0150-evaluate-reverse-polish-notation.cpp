class Solution {
public:
 int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+" && tokens[i]!="-"  &&tokens[i]!="*" && tokens[i]!="/" )
            {
                
                int a = stoi(tokens[i]);
              
               st.push(a);
            }
            else
            {
                long long a=st.top();
                st.pop();
                long long b=st.top();
                st.pop();
                if(tokens[i]=="+")
                {
                    st.push(a+b);
                }
                else if(tokens[i]=="-")
                {
                    st.push(b-a);
                }
                else if(tokens[i]=="*")
                {
                    st.push(a*b);
                }
                else if(tokens[i]=="/")
                {
                    st.push(b/a);
                }
            }
            cout<<st.top();
        }
        return st.top();
        
    }
};