class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        
        for(auto c:words[0])
        {   
            bool comm=true;
            for(int i=1;i<words.size();i++)
            {
                if(words[i].find(c)==string::npos)
                {
                    comm=false;
                    break;
                }else{
                     words[i].erase(words[i].find(c), 1);
                }
            }
            if(comm)
            {
                 ans.push_back(string(1, c));
            }
        }
       return ans;
    }
};