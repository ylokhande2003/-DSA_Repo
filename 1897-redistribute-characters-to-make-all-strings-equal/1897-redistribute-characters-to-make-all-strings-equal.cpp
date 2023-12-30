class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mp;
        for(auto w:words)
        {
            for(auto c:w)
            {
                mp[c]++;
            }
        }
        
        int n=words.size();
        for(auto m:mp)
        {
            if(m.second%n!=0){
                return false;
            }
        }
        return true;
    }
};