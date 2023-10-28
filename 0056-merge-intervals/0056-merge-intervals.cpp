class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m,k;
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        m=intervals[0][0];
        k=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            for(int j=0;j<1;j++)
            {
                if(j==0&&intervals[i][j]<=k&& m<=intervals[i][j+1])
                {
                    if(k<=intervals[i][j+1]&& m<=intervals[i][j])
                    {
                         k=intervals[i][j+1];
                    }else{
                        if(m>intervals[i][j])
                        {
                            m=intervals[i][j];
                        }
                        
                        if(k<=intervals[i][j+1]){
                             k=intervals[i][j+1];
                        }
                        
                    }
                   
                }else{
                    ans.push_back({m,k});
                    m=intervals[i][j];
                    k=intervals[i][j+1];
                }
            }
        }
        ans.push_back({m,k});
        return ans;
    
    }
};