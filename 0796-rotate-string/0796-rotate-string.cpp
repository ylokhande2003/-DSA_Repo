class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++)
        {
         reverse(s.begin(),s.end()-1);
         reverse(s.begin(),s.end());
            if(s==goal) return true;
        }
        return false;
    }
};