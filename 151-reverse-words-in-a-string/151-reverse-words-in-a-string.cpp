class Solution {
public:
    
    // yeh logic he jaise word he =>  my name  toh jaise m aya hmne khali string me concetenate krdia fir y aa m ke sath concetenate krdia jaise hi space ai hmne skip krdi avoh part and my ko stack me daldia then again same name ke sath hi fir jab vapis nikalna he ek iteration ki stack ki and check kiya stack empty he agr ni he mtlb space ke badh top pe dusra element he ek element nikalo space deke dusra nikal do and asatha me pop krte rho
    string reverseWords(string s) {
        if(s.size()==0) return s;
        stack<string>st;
        string result;
        for(int i=0;i<s.size();i++){
            string word;
            if(s[i]==' ') continue;
            
            while(i<s.size() && s[i]!=' ' ){
                word+=s[i];i++;}
             st.push(word);
        }
        while(!st.empty()){
            result+=st.top();
            st.pop();
            if(!st.empty()) result+=" ";
        }
        return result;
        
        
        
        
        
        
        
        
        
 // if(s.size() == 0) return s;
 //        stack<string> stack;
 //        string result;
 //        for(int i=0; i<s.size(); i++) {
 //            string word;
 //            if(s[i]==' ') continue; //skip spaces
 //            while(i<s.size() && s[i]!=' ' ) { //store continuous letters into word
 //                word += s[i]; i++;
 //            }
 //            stack.push(word); //push word to the stack
 //        }
 //        while(!stack.empty()) {
 //            result += stack.top(); stack.pop();
 //            if(!stack.empty()) result += " ";
 //        }
 //        return result;
    }
}; 