class Solution {
public:
    int maxDepth(string s) {
        int maxe=INT_MIN;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count++;
            }else if(s[i]==')')
            {
                count--;
            }
            maxe=max(maxe,count);
        }
        return maxe;
    }
};