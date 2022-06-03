        
class Solution {
public:
    string countAndSay(int n) {
         if(n==1){
           
            return "1";
           
         }
        string s=countAndSay(n-1);
       
      
        string str="";
      
        int counter=0;
        for(int i=0;i<s.length();i++){
            counter++;
        
                
            if(i==s.length()-1||s[i]!=s[i+1])   // traverse  krna he and jahan tk same group chlra count krlo 
            {
                str=str+to_string(counter)+s[i];  //string +counter+jisko counnt kr rhe voh ;
                //cout<<counter;
                counter=0;
            }
        }
        return str;
        
    }
};