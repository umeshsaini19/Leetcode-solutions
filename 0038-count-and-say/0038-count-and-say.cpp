class Solution {
public:
 string countAndSay(int n) {
        string ans = "1";
int count=1;
        for (int k = 2; k <= n; k++) {
            string temp = "";
            for (int i = 0; i < ans.size(); i++) {
              
                while (i < (ans.size() - 1) and (ans[i] == ans[i + 1])) {
                    i++;
                    count++;
                }
                temp.append(to_string(count) + ans[i]);
                count=1;
            }
            ans = temp;
        }

        return ans;
    }
};