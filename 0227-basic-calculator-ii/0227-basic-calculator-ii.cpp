class Solution {
public:
   int calculate(string s) {
        char op = '+'; 
        int curr = 0; 
        vector<int> stk; 
        
        for (int i = 0; i < s.size(); ++i) {
            
            if(isdigit(s[i])) curr = curr*10 + (s[i] - '0');    //character ko integer me convert krne ke liye
            
            if(i==s.size()-1 || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                if (op == '+') stk.push_back(curr); 
                else if (op == '-') stk.push_back(curr*(-1)); 
                else if (op == '*'){ 
                    int num = stk.back();    //yeh st.back,pop back ,push back sab esleye he kyuki vecto use kr rkha he hmne stack ni he esleye 
                    cout<<num<<" ";
                    stk.pop_back();
                    stk.push_back(num * curr);
                }
                else if (op == '/'){
                    int num = stk.back();
                    stk.pop_back();
                    stk.push_back(num / curr); 
                }
             
                curr = 0;
                op = s[i];         //yeh esleye he ki agli iteration  me kam kr rha he voh like * multiply aya he toh voh jab multiply pe hoga tb sirf sign lega and jab 2 pe hoga tb vph multipy krega esleye and curr ko har new value pe zero toh krna he pdega 
            
            }
        }
        return accumulate(stk.begin(), stk.end(), 0);   //jo sari value value rehgi vector me last me sabko add krdo 
    }
};

//main yeh he ki agr + ata he toh usko +2 aise add krdo agr - minus ata he usko (-2) aise krke multiplye divide ki same priority type hoti he toh dono ko on the spot kam krdo and daldo vector ke and r