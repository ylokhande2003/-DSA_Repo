class Solution {
public:
    string removeOuterParentheses(string s) {
        int opened=0;
        string res;
        for(auto c:s)
        {
            
             if (c == '(' && opened++ > 0) res += c;
            if (c == ')' && opened-- > 1) res += c;
           
        }
        return res;
    }
};