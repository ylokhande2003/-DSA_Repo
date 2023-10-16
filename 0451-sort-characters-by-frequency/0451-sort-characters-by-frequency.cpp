class Solution {
public:
    string frequencySort(string s) {
         map<char,int> m;
        vector<pair<int,char>> v;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(auto& it:m)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        for(auto it:v)
        {
            for(int i=0;i<it.first;i++)
            {
                ans.push_back(it.second);
            }
        }
          reverse(ans.begin(),ans.end());
        return ans;
    }
};