class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        for(int i=0;i<bank.size();i++)
        {
            int count=0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1') count++;
            }
            if(count>0){
                v.push_back(count);
            }
        }
        int ans=0,curnt=0,privas=0;
       for(auto s:v)
       {
           curnt=s;
           ans+=(curnt*privas);
           privas=curnt;
       }
        return ans;
    }
};