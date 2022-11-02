class Solution {
public:
    bool isPalindrome(string s) 
    {
        if(s.empty())
            return true;
        
        string s1 = "";
      
        for(int i = 0 ; i<s.length() ; i++)
        {
           if(s[i] >= 'A' and s[i] <= 'Z' || 
              s[i] >= 'a' and s[i] <= 'z' ||
              s[i] >= '0' and s[i] <= '9'
             )
               s1 += tolower(s[i]);
        }
        
        cout<<s1;
        //Now from here palindrome part.
		
        int start = 0;
        int end = s1.length() -1;
        
        while(start < end)
        {
            if(s1[start] != s1[end]) // if the front and last element is not same , can never be palindrome
                return false;
            
            start++;
            end--;
        }
        return true;
        
    }
    
};