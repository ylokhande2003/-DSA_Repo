class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                 ans.push(s[i]);
            }else 
            {
            if(ans.empty()) return false;
            else if(s[i]==')'&&ans.top()!='(')
            {
                return false;
            }else if(s[i]=='}'&&ans.top()!='{')
            {
                return false;
            }else if(s[i]==']'&& ans.top()!='[')
            {
                     return false;
            }
                ans.pop();
            }
        }
        if(!ans.empty())
        {
            return false;
        }
        return ans.empty();
    }
};